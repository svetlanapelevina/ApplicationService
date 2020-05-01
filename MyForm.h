#pragma once
#include "TireService.h"
#include "MaintenanceService.h"
#include "DiskRepair.h"
#include "Service.h"
#include "Source.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <sstream>

namespace CarService {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			listViewMenu->Items->Clear();
			int i = 0;
			for (Service* service : *Source::AllServices)
			{
				listViewMenu->Items->Add(i.ToString());
				string S = service->toString();
				istringstream ss(S);
				string str;
				int k = 0;
				while (ss >> str)
					if (k++ != 0) listViewMenu->Items[i]->SubItems->Add(gcnew System::String(str.c_str(), 0, str.length()));
				i++;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ руководствоToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonSearch;

	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::TextBox^ textBoxFirstCost;
	private: System::Windows::Forms::TextBox^ textBoxSecondCost;

	private: System::Windows::Forms::CheckBox^ checkBoxTireService;
	private: System::Windows::Forms::CheckBox^ checkBoxMaintenanceService;
	private: System::Windows::Forms::CheckBox^ checkBoxDiskRepair;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListView^ listViewMenu;
	private: System::Windows::Forms::ColumnHeader^ Number;
	private: System::Windows::Forms::ColumnHeader^ ClientName;

	private: System::Windows::Forms::ColumnHeader^ Cost;



	private: System::Windows::Forms::ColumnHeader^ Info;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;







	private:

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->руководствоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstCost = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSecondCost = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxTireService = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMaintenanceService = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDiskRepair = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listViewMenu = (gcnew System::Windows::Forms::ListView());
			this->Number = (gcnew System::Windows::Forms::ColumnHeader());
			this->ClientName = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->Info = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(905, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->создатьToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(59, 24);
			this->toolStripMenuItem1->Text = L"Файл";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::savetoToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->руководствоToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// руководствоToolStripMenuItem
			// 
			this->руководствоToolStripMenuItem->Name = L"руководствоToolStripMenuItem";
			this->руководствоToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->руководствоToolStripMenuItem->Text = L"Руководство";
			this->руководствоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::руководствоToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(162, 164);
			this->buttonSearch->Margin = System::Windows::Forms::Padding(2);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(118, 25);
			this->buttonSearch->TabIndex = 1;
			this->buttonSearch->Text = L"Обновить";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm::buttonSearch_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(136, 119);
			this->textBoxName->Margin = System::Windows::Forms::Padding(2);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(88, 26);
			this->textBoxName->TabIndex = 2;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxName_TextChanged);
			// 
			// textBoxFirstCost
			// 
			this->textBoxFirstCost->Location = System::Drawing::Point(147, 81);
			this->textBoxFirstCost->Margin = System::Windows::Forms::Padding(2);
			this->textBoxFirstCost->Name = L"textBoxFirstCost";
			this->textBoxFirstCost->Size = System::Drawing::Size(88, 26);
			this->textBoxFirstCost->TabIndex = 3;
			this->textBoxFirstCost->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBoxSecondCost
			// 
			this->textBoxSecondCost->Location = System::Drawing::Point(279, 82);
			this->textBoxSecondCost->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSecondCost->Name = L"textBoxSecondCost";
			this->textBoxSecondCost->Size = System::Drawing::Size(88, 26);
			this->textBoxSecondCost->TabIndex = 5;
			this->textBoxSecondCost->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSecondCost_TextChanged);
			// 
			// checkBoxTireService
			// 
			this->checkBoxTireService->AutoSize = true;
			this->checkBoxTireService->Location = System::Drawing::Point(21, 45);
			this->checkBoxTireService->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxTireService->Name = L"checkBoxTireService";
			this->checkBoxTireService->Size = System::Drawing::Size(128, 23);
			this->checkBoxTireService->TabIndex = 7;
			this->checkBoxTireService->Text = L"Шиномонтаж";
			this->checkBoxTireService->UseVisualStyleBackColor = true;
			this->checkBoxTireService->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBoxMaintenanceService
			// 
			this->checkBoxMaintenanceService->AutoSize = true;
			this->checkBoxMaintenanceService->Location = System::Drawing::Point(296, 45);
			this->checkBoxMaintenanceService->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxMaintenanceService->Name = L"checkBoxMaintenanceService";
			this->checkBoxMaintenanceService->Size = System::Drawing::Size(162, 23);
			this->checkBoxMaintenanceService->TabIndex = 8;
			this->checkBoxMaintenanceService->Text = L"Техобслуживание";
			this->checkBoxMaintenanceService->UseVisualStyleBackColor = true;
			this->checkBoxMaintenanceService->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBoxDiskRepair
			// 
			this->checkBoxDiskRepair->AutoSize = true;
			this->checkBoxDiskRepair->Location = System::Drawing::Point(153, 45);
			this->checkBoxDiskRepair->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxDiskRepair->Name = L"checkBoxDiskRepair";
			this->checkBoxDiskRepair->Size = System::Drawing::Size(139, 23);
			this->checkBoxDiskRepair->TabIndex = 9;
			this->checkBoxDiskRepair->Text = L"Ремонт дисков";
			this->checkBoxDiskRepair->UseVisualStyleBackColor = true;
			this->checkBoxDiskRepair->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 84);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 19);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Стоимость";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 84);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 19);
			this->label2->TabIndex = 11;
			this->label2->Text = L"От:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(240, 84);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 19);
			this->label3->TabIndex = 12;
			this->label3->Text = L"До:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 122);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 19);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Имя клиента:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// listViewMenu
			// 
			this->listViewMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listViewMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Number, this->ClientName,
					this->Cost, this->Info
			});
			this->listViewMenu->HideSelection = false;
			this->listViewMenu->Location = System::Drawing::Point(21, 204);
			this->listViewMenu->Name = L"listViewMenu";
			this->listViewMenu->Size = System::Drawing::Size(823, 345);
			this->listViewMenu->TabIndex = 14;
			this->listViewMenu->UseCompatibleStateImageBehavior = false;
			this->listViewMenu->View = System::Windows::Forms::View::Details;
			this->listViewMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listViewMenu_SelectedIndexChanged);
			// 
			// Number
			// 
			this->Number->Text = L"N";
			this->Number->Width = 20;
			// 
			// ClientName
			// 
			this->ClientName->Text = L"Имя клиента";
			this->ClientName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ClientName->Width = 200;
			// 
			// Cost
			// 
			this->Cost->Text = L"Стоимость";
			this->Cost->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Cost->Width = 75;
			// 
			// Info
			// 
			this->Info->Text = L"Дополнительная информация";
			this->Info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Info->Width = 400;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 25);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 555);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 34);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 601);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listViewMenu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBoxDiskRepair);
			this->Controls->Add(this->checkBoxMaintenanceService);
			this->Controls->Add(this->checkBoxTireService);
			this->Controls->Add(this->textBoxSecondCost);
			this->Controls->Add(this->textBoxFirstCost);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		listViewMenu->Items->Clear();
		int i = 0;
		for (Service* service : *Source::AllServices)
		{
			listViewMenu->Items->Add(i.ToString());
			string S = service->toString();
			istringstream ss(S);
			string str;
			int k = 0;
			while (ss >> str)
				if (k++ != 0) listViewMenu->Items[i]->SubItems->Add(gcnew System::String(str.c_str(), 0, str.length()));
			i++;
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		auto result = MessageBox::Show("Вы уверены, что хотите выйти?", "Выход",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void listViewMenu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int first, second;
		if (textBoxFirstCost->Text->CompareTo("") == 0) first = 0;
		else first = Convert::ToInt32(textBoxFirstCost->Text);
		if (textBoxSecondCost->Text->CompareTo("") == 0) second = MAXINT;
		else second = Convert::ToInt32(textBoxSecondCost->Text);

		string inputName = msclr::interop::marshal_as<std::string>(textBoxName->Text);
		std::list<Service*> result;

		for (Service* service : *Source::AllServices)
		{
			bool c1 = (service->getCost() <= second && service->getCost() >= first);
			bool c2 = ((service->getClientName()).find(inputName) != string::npos) || (inputName.compare("") == 0);
			if (checkBoxDiskRepair->Checked && service->getNumber() == 2 && c1 && c2) result.push_back(service);
			if (checkBoxTireService->Checked && service->getNumber() == 1 && c1 && c2) result.push_back(service);
			if (checkBoxMaintenanceService->Checked && service->getNumber() == 3 && c1 && c2) result.push_back(service);
			if (!(checkBoxMaintenanceService->Checked || checkBoxMaintenanceService->Checked || checkBoxMaintenanceService->Checked) && c1 && c2) result.push_back(service);
		}

		listViewMenu->Items->Clear();
		int i = 0;
		for (Service* service : result)
		{
			listViewMenu->Items->Add(i.ToString());
			string S = service->toString();
			istringstream ss(S);
			string str;
			int k = 0;
			while (ss >> str)
				if (k++ != 0) listViewMenu->Items[i]->SubItems->Add(gcnew System::String(str.c_str(), 0, str.length()));
			i++;
		}
	}
	private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		auto result = MessageBox::Show("Данная программа представляет информационно-поисковую систему \"Автосервис\"", "О программе",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	private: System::Void руководствоToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		auto result = MessageBox::Show("Выберете тип услуги из предложенных, начальный и конечный порог стоимости и имя заказчика. При желaнии поля можно оставить пустыми.", "Руководство",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		dr = MessageBox::Show(
			"Сохранить данные?",
			"Сохранение",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			ofstream file("saveto.txt");
			for (Service* service : *Source::AllServices)
			{
				file << service->toString() << "\n";
			}
		}
		Source::AllServices->clear();
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			fileName = saveFileDialog1->FileName;
		}
		else return;
		ifstream file(msclr::interop::marshal_as<std::string>(fileName));
		char str[50], name[50], cost[50], info[50];
		file >> str;
		while (!String(str).Empty)
		{
			file >> name;
			file >> cost;
			file >> info;
			switch (atoi(str))
			{
			case 1:
				Source::addElement(new TireService(name, atoi(cost), info));
				break;
			case 2:
				Source::addElement(new DiskRepair(name, atoi(cost), info));
				break;
			case 3:
				Source::addElement(new MaintenanceService(name, atoi(cost), info));
				break;
			}
			file >> str;
		}
		file.close();
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Windows::Forms::DialogResult dr;
		dr = MessageBox::Show(
			"Сохранить?",
			"Сохранение",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			ofstream file("saveto.txt");
			for (Service* service : *Source::AllServices)
			{
				file << service->toString() << "\n";
			}
		}
	}
	private: System::Void savetoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName;
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			fileName = folderBrowserDialog1->SelectedPath + "\\saveto.txt";
		}
		ofstream file(msclr::interop::marshal_as<std::string>(fileName));

		for (Service* service : *Source::AllServices)
		{
			file << service->toString() << "\n";
		}
	}

	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxSecondCost_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
};
