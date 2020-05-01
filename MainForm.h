#pragma once
#include "MyForm.h"
#include "Add.h"
#include "ChangeAndDelete.h"
#include <iostream>
#include <fstream>

namespace CarService {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ AddService;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ ShowMenu;
	private: System::Windows::Forms::Button^ Exit;

	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Button^ buttonChangeDelete;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;










	protected:


	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddService = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ShowMenu = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->buttonChangeDelete = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30.25F));
			this->label1->Location = System::Drawing::Point(281, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 59);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����������";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// AddService
			// 
			this->AddService->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->AddService->Location = System::Drawing::Point(319, 208);
			this->AddService->Margin = System::Windows::Forms::Padding(35, 32, 35, 32);
			this->AddService->Name = L"AddService";
			this->AddService->Size = System::Drawing::Size(216, 50);
			this->AddService->TabIndex = 0;
			this->AddService->Text = L"�������� ������";
			this->AddService->UseVisualStyleBackColor = true;
			this->AddService->Click += gcnew System::EventHandler(this, &MainForm::Add_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(850, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->���������ToolStripMenuItem, this->������������ToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(59, 24);
			this->toolStripMenuItem1->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->exitToolStripMenuItem->Text = L"�����";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::textToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem_Click);
			// 
			// ShowMenu
			// 
			this->ShowMenu->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->ShowMenu->Location = System::Drawing::Point(319, 127);
			this->ShowMenu->Margin = System::Windows::Forms::Padding(35, 32, 35, 32);
			this->ShowMenu->Name = L"ShowMenu";
			this->ShowMenu->Size = System::Drawing::Size(216, 50);
			this->ShowMenu->TabIndex = 1;
			this->ShowMenu->Text = L"������� ����";
			this->ShowMenu->UseVisualStyleBackColor = true;
			this->ShowMenu->Click += gcnew System::EventHandler(this, &MainForm::ShowMenu_Click);
			// 
			// Exit
			// 
			this->Exit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Exit->Location = System::Drawing::Point(319, 402);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(216, 49);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"�����";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MainForm::Exit_Click_1);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MainForm::folderBrowserDialog1_HelpRequest);
			// 
			// buttonChangeDelete
			// 
			this->buttonChangeDelete->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonChangeDelete->Location = System::Drawing::Point(319, 291);
			this->buttonChangeDelete->Margin = System::Windows::Forms::Padding(35, 32, 35, 32);
			this->buttonChangeDelete->Name = L"buttonChangeDelete";
			this->buttonChangeDelete->Size = System::Drawing::Size(216, 50);
			this->buttonChangeDelete->TabIndex = 5;
			this->buttonChangeDelete->Text = L"��������������";
			this->buttonChangeDelete->UseVisualStyleBackColor = true;
			this->buttonChangeDelete->Click += gcnew System::EventHandler(this, &MainForm::buttonChangeDelete_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 486);
			this->Controls->Add(this->buttonChangeDelete);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->AddService);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->ShowMenu);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.25F));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������� ����";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: System::Void ShowMenu_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm^ form2 = gcnew MyForm();
			form2->Show();
		}
		private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
			Add^ form3 = gcnew Add();
			form3->Show();
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
		private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			auto result = MessageBox::Show("�� ������� ��� ������ �����?", "�����",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		private: System::Void textToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			auto result = MessageBox::Show("��� ��������� � ������ ���������� ������� ����������� ���� \n��� ���������� ������ �������� ������� �������� ������ \n��� �������������� ������������ ��������� ������� �������������� \n��� ������ �� ��������� ������� �����", "�����������",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			auto result = MessageBox::Show("������ ��������� ������������ �������������-��������� ������� \"����������\"", "� ���������",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		private: System::Void saveToToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
		};
		private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

			System::Windows::Forms::DialogResult dr;
			dr = MessageBox::Show(
				"���������?",
				"����������",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning);
			if (dr == System::Windows::Forms::DialogResult::Yes)
			{
				ofstream file("save.txt");
				for (Service* service : *Source::AllServices)
				{
					file << service->toString() << "\n";
				}
			}
		}
	private: System::Void Exit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		auto result = MessageBox::Show("�� ������� ��� ������ �����?", "�����",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
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
	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonChangeDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangeAndDelete^ form4 = gcnew ChangeAndDelete();
	form4->Show();
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	auto result = MessageBox::Show("��������� ������� ������?", "����������",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		ofstream file("save.txt");
		for (Service* service : *Source::AllServices)
		{
			file << service->toString() << "\n";
		}
	}
	Source::AllServices->clear();
	}
};
}