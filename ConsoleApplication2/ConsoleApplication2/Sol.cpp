#include "Sol.h"
#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
using str = std::string;
double Fy(double x) { return sqrt(x / (4 * log(x))); };
RS::RS()
{
	std::ifstream datain;

	{
		std::cout << "Сохраните исходные данные в строку как « Начало_интервала Конец_интервала Шаг » в файл datain.txt в папке с программой\nДля продолжения введите любой символ...\n";
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		std::cin.clear();
		std::cin.get();
	}
	{
		int outwhile = 0;
		do
		{
			try
			{
				datain.open("datain.txt", std::ios::_Nocreate);
			}
			catch (...)
			{
				int switcher;
				std::cout << "Произошла ошибка при открытии файла\n1\t- попробовать открыть файл снова\n0\t- выход\n\nyourchose>";
				std::cin.ignore(std::cin.rdbuf()->in_avail());
				std::cin >> switcher;
				switch (switcher)
				{
				case 0:
					outwhile = 1;
				case 1:
				default:
					break;
				}
			}
			if (!datain.is_open())
			{
				int switcher;
				std::cerr << "Вы не сохранили исходные данные в datain.txt\n1\t- попробовать открыть файл снова\n0\t- выход\n\nyourchose>";
				std::cin.ignore(std::cin.rdbuf()->in_avail());
				std::cin.clear();
				std::cin >> switcher;
				switch (switcher)
				{
				case 0:
					outwhile = 1;
				case 1:
				default:
					break;
				}
			}
		} while ((!datain.is_open()) && (outwhile != 1));
	}
	if (datain.is_open())
	{
		double Itera, Iterb, Itershag;
		bool neych = 0;
		int i = 0;
		std::cout << "\nПрочитанные данные:\na\tb\tшаг\n";
		while (!datain.eof())
		{
			datain >> Itera >> Iterb >> Itershag;
			if (((Itera < 1) || (Iterb < 1)) || (abs(Itershag) > abs(Iterb - Itera)))
			{
				std::cout << "Набор не учтён\n";
				neych = 1;
			}
			else {
				if (((Itershag > 0) && ((Iterb - Itera) < 0)) || (((Iterb - Itera) > 0) && (Itershag < 0)))
					Itershag = -Itershag;
				a.push_back(Itera); b.push_back(Iterb); shag.push_back(Itershag);
				std::cout << a.at(i) << '\t' << b.at(i) << '\t' << shag.at(i) << '\n';
				i++;
			}
		}
		datain.close();
		if (neych)
			std::cout << "\nВ одном из наборов « Начало_интервала Конец_интервала Шаг » в файле datain.txt\nили-\tинтервал не удовлетворяет О.Д.З. функции: D(y):(1;+00)\t(или же x>1)\nили-\tшаг табулирования функции больше интервала табулирования функции\n\n";
		else std::cout << '\n';
		if (!(a.size() == b.size()) && (a.size() == shag.size()))
		{
			std::cout << "Наборы « Начало_интервала Конец_интервала Шаг » в файле datain.txt оказались не полные\n";
			a.clear(); b.clear(); shag.clear();
			std::cout << "Прочитанные данные удалены\n";
		}
	}
}
Sol::Sol()
{
	if (!(a.empty()))
	{
		n = new int[a.size() + 1];
		n[a.size()] = 0; //кол-во всех точек
		for (int i = 0; i < a.size(); i++)
		{
			n[i] = static_cast<int>((b.at(i) - a.at(i)) / shag.at(i) + 1);
			n[a.size()] += n[i];
		}
		mas = new Point[n[a.size()]];
		{
			int iter = 0;
			std::cout << "\nТабулированая функция:\nx: \ty: \n";
			for (int i = 0; i < a.size(); i++) //Для каждой строки
				for (int k = 0; k < n[i]; k++) //Для каждой точки интервала строки
				{
					mas[iter].x = a[i] + k * shag[i];
					mas[iter].y = Fy(mas[iter].x);
					std::cout << mas[iter].x << '\t' << mas[iter].y << '\n';
					iter++; //после каждой записи увеличивается, должен быть равен n[a.size()] после всех итераций
				}
			std::cout << "\n";
		} // здесь уже массив должен быть заполнен точками
	}
};
DateOut::DateOut(Sol *A)
{
	if (!A->a.empty()) {
		std::ofstream outfile;
		outfile.open("dataout.txt");
		outfile << "x: " << '\t' << "y: " << '\n';
		for (int i = 0; i < A->n[A->a.size()]; i++)
			outfile << A->mas[i].x << '\t' << A->mas[i].y << '\n';
		outfile << "\n";
		outfile.close();
		std::cout << "Табулированная функция записана в dataout.txt" << '\n' << '\n';
	}
	else
		std::cout << "\nДанные не прочитаны\nСначала следует прочитать интервал и шаг табулирования функции и табулировать функцию\n\n";
}
