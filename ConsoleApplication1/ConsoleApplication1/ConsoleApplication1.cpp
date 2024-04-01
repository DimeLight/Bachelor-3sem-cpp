#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	bool okab = 0, okshag = 0, oktabs = 0;
	char endOfProgram = 0;
	int switcher, n;
	double  a, b, shag, **mas = new double*[2];
	do
	{
		cout << "\nПрограмма табулирования заданной функции по введённым интервалу и шагу табулирования функции 16 вариант\n1\t- ввести интервал табулирования функции\n2\t- ввести шаг табулирования функции\n3\t- табулировать функцию\n4\t- записать табулированную функцию в solution.txt\n0\t- выход\n\nyourchose>";
		cin.ignore(std::cin.rdbuf()->in_avail());
		cin.clear();
		cin >> switcher;
		cout << endl;
		switch (switcher)
		{
		case 1:
		{
			bool  nokab = 0;
			do
			{
				cout << "Введите интервал табулирования функции [D(y):(1;+00)]\n";
				cout << "a: ";
				cin.ignore(std::cin.rdbuf()->in_avail());
				cin.clear();
				cin >> a;
				cout << "b: ";
				cin >> b;
				cout << endl;
				if (a <= 1 || b <= 1)
				{
					okab = 0;
					cout << "Вы ввели интервал не удовлетворяющий О.Д.З. функции: D(y):(1;+00)\t(или же x>1)\n1\t- ввести интервал табулирования функции заново\n0\t- выход\n\nyourchose>";
					cin.ignore(std::cin.rdbuf()->in_avail());
					cin.clear();
					cin >> switcher;
					cout << endl;
					switch (switcher)
					{
					default:
						nokab = 1;
					case 1:
						switcher = 42;
						break;
					}
				}
				else
					okab = 1;
			} while (!(okab || nokab));
		}
		break;
		case 2:
		{
			if (!okab) {
				cout << "Сначала введите интервал табулирования функции\n0\t- выход\n\nyouhavenochose>";
				cin.ignore(std::cin.rdbuf()->in_avail());
				cin.clear();
				cin.get();
				break;
			}
			bool  nokshag = 0;
			do {
				cout << "Введите шаг табулирования функции\n(Шаг табулирования функции не должен быть больше интервала табулирования функции)\nshag: ";
				cin.ignore(std::cin.rdbuf()->in_avail());
				cin.clear();
				cin >> shag;
				cout << endl;
				if (((shag > 0) && ((b - a) < 0)) || (((b - a) > 0) && (shag < 0)))
					shag = -shag;
				if (abs(b - a) >= abs(shag) && abs(shag) > 0)
					okshag = 1;
				else
				{
					okshag = 0;
					cout << "Вы ввели шаг табулирования функции больше интервала табулирования функции\n1\t- ввести шаг табулирования функции заново\n0\t- выход\n\nyourchose>";
					cin.ignore(std::cin.rdbuf()->in_avail());
					cin.clear();
					cin >> switcher;
					cout << endl;
					switch (switcher)
					{
					default:
						nokshag = 1;
					case 1:
						switcher = 42;
						break;
					}
				}
			} while (!(okshag || nokshag));
		}
		break;
		case 3:
		{
			if (!(okab && okshag))
			{
				cout << "При вводе интервала и шага табулирования функции что-то пошло не так, функция не может быть табулирована\n0\t- выход\n\nyouhavenochose>";
				cin.ignore(std::cin.rdbuf()->in_avail());
				cin.clear();
				cin.get();
				cout << endl;
				switcher = 42;
			}
			else
			{
				cout << "Интервал и шаг табулирования функции введены\n";
				n = static_cast<int>((b - a) / shag + 1);
				if (oktabs)
				{
					delete[] mas[0];
					delete[] mas[1];
					delete[] mas;
				}
				for (int i = 0; i < 2; i++)
					mas[i] = new double[n];
				for (int i = 0; i < n; i++)
				{
					mas[0][i] = a + i * shag;
					mas[1][i] = sqrt(mas[0][i] / (4 * log(mas[0][i])));
				}
				cout << "Функция табулирована на заданном интервале с заданным шагом\n";
				oktabs = 1;
				// Проверка/вывод табуляции
				cout << "x: " << '\t' << "y: " << '\n';
				for (int i = 0; i < n; i++)
					cout << mas[0][i] << '\t' << mas[1][i] << '\n';
				cout << endl;
			}
			break;
		}
		case 4:
		{
			if (oktabs != 1)
			{
				cout << "Функция не табулирована, сначала табулируйте функцию\n0\t- выход\n\nyouhavenochose>";
				cin.ignore(std::cin.rdbuf()->in_avail());
				cin.clear();
				cin.get();
				cout << endl;
			}
			else
			{
				ofstream outfile;
				outfile.open("solution.txt");
				outfile << "x: " << '\t' << "y: " << '\n';
				for (int i = 0; i < n; i++)
					outfile << mas[0][i] << '\t' << mas[1][i] << '\n';
				outfile << endl;
				outfile.close();
				cout << "Табулированная функция записана в файл solution.txt" << '\n' << '\n';
			}
			break;
		}
		case 0:
		{
			endOfProgram = 1;
			break;
		}
		default:
		{
			switcher = 42;
			break;
		}
		}
	} while (!endOfProgram);
	if (oktabs)
	{
		delete[] mas[0];
		delete[] mas[1];
		delete[] mas;
	}
	return 0;
}