#pragma once
#include "Sol.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button2;



	private:




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::Color::ForestGreen;
			this->label1->Location = System::Drawing::Point(25, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Начало интервалла";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->ForeColor = System::Drawing::Color::ForestGreen;
			this->label2->Location = System::Drawing::Point(208, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Конец интервала";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->ForeColor = System::Drawing::Color::ForestGreen;
			this->label3->Location = System::Drawing::Point(378, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Шаг табулирования";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->ForeColor = System::Drawing::Color::ForestGreen;
			this->richTextBox1->Location = System::Drawing::Point(19, 45);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(152, 124);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::Black;
			this->richTextBox3->ForeColor = System::Drawing::Color::ForestGreen;
			this->richTextBox3->Location = System::Drawing::Point(373, 45);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(148, 124);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->ForeColor = System::Drawing::Color::ForestGreen;
			this->label4->Location = System::Drawing::Point(16, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"X:";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->ForeColor = System::Drawing::Color::ForestGreen;
			this->label5->Location = System::Drawing::Point(226, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Y:";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->richTextBox4->BackColor = System::Drawing::Color::Black;
			this->richTextBox4->ForeColor = System::Drawing::Color::ForestGreen;
			this->richTextBox4->Location = System::Drawing::Point(19, 278);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(176, 311);
			this->richTextBox4->TabIndex = 3;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->richTextBox5->BackColor = System::Drawing::Color::Black;
			this->richTextBox5->ForeColor = System::Drawing::Color::ForestGreen;
			this->richTextBox5->Location = System::Drawing::Point(229, 278);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(292, 311);
			this->richTextBox5->TabIndex = 4;
			this->richTextBox5->Text = L"";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->ForeColor = System::Drawing::Color::ForestGreen;
			this->label6->Location = System::Drawing::Point(16, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Результат табулирования: ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::ForestGreen;
			this->button1->Location = System::Drawing::Point(17, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(504, 33);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Табулировать функцию на заданном интервале с заданным шагом";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Black;
			this->richTextBox2->ForeColor = System::Drawing::Color::ForestGreen;
			this->richTextBox2->Location = System::Drawing::Point(196, 45);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(152, 124);
			this->richTextBox2->TabIndex = 8;
			this->richTextBox2->Text = L"";
			// 
			// chart1
			// 
			this->chart1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->chart1->BackColor = System::Drawing::Color::Black;
			chartArea3->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea3->AxisX->InterlacedColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->LabelStyle->ForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->MajorGrid->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->MajorTickMark->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->MinorGrid->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->MinorTickMark->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->ScrollBar->BackColor = System::Drawing::Color::Black;
			chartArea3->AxisX->ScrollBar->ButtonColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->ScrollBar->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX->Title = L"X";
			chartArea3->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisX->TitleForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX2->InterlacedColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX2->LabelStyle->ForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX2->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisX2->TitleForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea3->AxisY->InterlacedColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->LabelStyle->ForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->MajorGrid->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->MajorTickMark->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->MinorGrid->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->MinorTickMark->Enabled = true;
			chartArea3->AxisY->MinorTickMark->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea3->AxisY->Title = L"Y";
			chartArea3->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisY->TitleForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea3->AxisY2->InterlacedColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->LabelStyle->ForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->MajorGrid->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->MajorTickMark->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->MinorGrid->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->MinorTickMark->LineColor = System::Drawing::Color::ForestGreen;
			chartArea3->AxisY2->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea3->AxisY2->Title = L"Y";
			chartArea3->AxisY2->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisY2->TitleFont = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisY2->TitleForeColor = System::Drawing::Color::ForestGreen;
			chartArea3->BackColor = System::Drawing::Color::Black;
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Location = System::Drawing::Point(551, 11);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series3->LabelForeColor = System::Drawing::Color::ForestGreen;
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(749, 577);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(739, 550);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(429, 38);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Сброс графиков";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1312, 602);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::ForestGreen;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(960, 540);
			this->Name = L"Form1";
			this->Opacity = 0.95;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение табулирования заданной функции и вывода графика 16 варант";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int ser = 0;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if ((richTextBox1->Lines->Length > 0) && (richTextBox2->Lines->Length > 0) && (richTextBox3->Lines->Length > 0))
		{
			Sol A;
			RS *B = &A;
			B->inputabshag(richTextBox1, richTextBox2, richTextBox3);
			for (int j = 0;j < B->numOfNaborov;j++)
			{
				DataVisualization::Charting::Series^  seriesser = (gcnew DataVisualization::Charting::Series());
				seriesser->ChartArea = chart1->Series[ser]->ChartArea;
				seriesser->ChartType = chart1->Series[ser]->ChartType;
				seriesser->Font = chart1->Series[ser]->Font;
				seriesser->LabelForeColor = chart1->Series[ser]->LabelForeColor;
				seriesser->Name = L"Series" + Convert::ToString(ser + 2);
				seriesser->BorderWidth = (ser % 2) + 1;
				chart1->Series->Add(seriesser);
				for (int i = 0;i < B->outputXY(j).size();i++)
				{
					chart1->Series[ser]->Points->AddXY(B->outputXY(j)[i].x, B->outputXY(j)[i].y);
					richTextBox4->AppendText(System::Convert::ToString(B->outputXY(j)[i].x) + "\n");
					richTextBox5->AppendText(System::Convert::ToString(B->outputXY(j)[i].y) + "\n");
				}
				ser++;
			}
		}
		else
		{
			MessageBox::Show("Вы не ввели интервал или шаг\nВведите данные", "Не считается", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		};
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		while (ser > 0) {
			chart1->Series->Remove(chart1->Series[ser]);
			ser--;
		}
		chart1->Series[ser]->Points->Clear();
		richTextBox4->Text = "";
		richTextBox5->Text = "";
	}
	};
}
