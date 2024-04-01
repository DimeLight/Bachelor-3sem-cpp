#include "stdafx.h"
#include "Sol.h"
#include <vector>
#include <set>
#include <algorithm>
void RS::inputabshag(System::Windows::Forms::RichTextBox ^ ai, System::Windows::Forms::RichTextBox ^ bi, System::Windows::Forms::RichTextBox ^ shagi)
{
	if ((ai->Lines->Length == bi->Lines->Length) && (ai->Lines->Length == shagi->Lines->Length))
	{
		std::vector<double> a;
		std::vector<double> b;
		std::vector<double> shag;
		try
		{
			bool err = 0;
			using namespace System::Windows::Forms;
			for (int i = 0; i < ai->Lines->Length; i++)
				if (ai->Lines[i] != "")
					if (System::Convert::ToDouble(ai->Lines[i]) > 1)
						a.push_back(System::Convert::ToDouble(ai->Lines[i]));
					else
					{
						MessageBox::Show("Вы ввели интервал не удовлетворяющий О.Д.З. функции: D(y):(1;+00)\t(или же x>1)\nВведите корректные данные", "Ошибка в первой границе интервала", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
						err = 1;
					}
			for (int i = 0; i < bi->Lines->Length; i++)
				if (bi->Lines[i] != "")
					if (System::Convert::ToDouble(bi->Lines[i]) > 1)
						b.push_back(System::Convert::ToDouble(bi->Lines[i]));
					else
					{
						MessageBox::Show("Вы ввели интервал не удовлетворяющий О.Д.З. функции: D(y):(1;+00)\t(или же x>1)\nВведите корректные данные", "Ошибка во второй границе интервала", MessageBoxButtons::OK, MessageBoxIcon::Error);
						err = 1;
					}
			if (!err)
				for (int i = 0; i < shagi->Lines->Length; i++)
					if (shagi->Lines[i] != "")
						if (abs(System::Convert::ToDouble(shagi->Lines[i])) <= abs(b[i] - a[i]))
							if (((System::Convert::ToDouble(shagi->Lines[i]) > 0) && ((b[i] - a[i]) < 0)) || (((b[i] - a[i]) > 0) && (System::Convert::ToDouble(shagi->Lines[i]) < 0)))
								shag.push_back(-(System::Convert::ToDouble(shagi->Lines[i])));
							else
								shag.push_back(System::Convert::ToDouble(shagi->Lines[i]));

						else
						{
							MessageBox::Show("Вы ввели шаг табулирования функции больше интервала табулирования функции\nВведите корректные данные", "Ошибка в шаге", MessageBoxButtons::OK, MessageBoxIcon::Error);
							err = 1;
						}
			if (err) {
				a.clear();
				b.clear();
				MessageBox::Show("Количество интервалов и/или шагов не одинаковое, введите равное количество интервалов и/или шагов", "Ошибка во вводных данных", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		catch (System::FormatException ^e)
		{
			using namespace System::Windows::Forms;
			a.clear();
			b.clear();
			MessageBox::Show(e->Message + "\n(Следует использовать запятую как десятичный разделитель)", "Ошибка во вводных данных", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		int * n; std::set<double> xi;
		n = new int[a.size()];
		for (int i = 0; i < a.size(); i++)
		{
			n[i] = (b[i] - a[i]) / shag[i] + 1;
			xi.clear();
			for (int j = 0; j < n[i]; j++)
				xi.insert(a[i] + j * shag[i]);
			x.push_back(xi);
		};
		numOfNaborov = static_cast<int>(x.size());
	}
	else
	{
		using namespace System::Windows::Forms;
		MessageBox::Show("Количество интервалов и/или шагов не одинаковое, введите равное количество интервалов и/или шагов", "Ошибка во вводных данных", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}

std::vector<Pointxy> RS::outputXY(int i)
{
	std::vector<Pointxy> * XY = new std::vector<Pointxy>;
	std::for_each(x[i].begin(), x[i].end(), [XY, this](double i) mutable
		{
			Pointxy XYo(i, Fy(i));
			XY->push_back(XYo);
		});
	return *XY;
}