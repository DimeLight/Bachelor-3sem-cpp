#include <iostream>
#include "Sol.h"
int main()
{
	setlocale(LC_ALL, "rus");
	{
		int switcher;
		bool outwhile = 0;
		Sol *A = nullptr;
		do
		{
			std::cout << "\nПрограмма табулирования заданной функции по прочитанным из файла интервалу и шагу табулирования функции 16 вариант\n1\t- прочитать интервал и шаг табулирования функции и табулировать функцию\n2\t- записать табулированную функцию в dataout.txt\n0\t- выход\n\nyourchose>";
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			std::cin.clear();
			std::cin >> switcher;
			switch (switcher)
			{
			case 1:
				A = new Sol;
				break;
			case 2:
				if ((A != nullptr) || (A))
					DateOut B(A);
				else
					std::cout << "\nСначала следует прочитать интервал и шаг табулирования функции и табулировать функцию\n\n";
				break;
			case 0:
				outwhile = 1;
			default:
				break;
			}
		} while (!outwhile);
	}
	return 0;
}