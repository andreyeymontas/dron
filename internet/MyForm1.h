#pragma once
#include "MyForm1.h" // ���������, ��� ���� MyForm1.h �������
namespace internet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void);
		
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		
		// ����������� �������
		void InitializeDatabase();
		void UpdateDatabase();
		void AddRecord(String^ name, int quantity, double price);
		void RemoveRecord(int rowIndex);
		OleDbConnection^ connection;
		OleDbDataAdapter^ adapter;
		DataTable^ dataTable;

	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;
		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Plum;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(525, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������� ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Plum;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(525, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(251, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Plum;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(525, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(251, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(556, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(556, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(556, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(552, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"�������� ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(552, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"����������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(552, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"����";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Aqua;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::Gray;
			this->dataGridView1->Location = System::Drawing::Point(12, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(445, 358);
			this->dataGridView1->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Plum;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(525, 382);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(251, 35);
			this->button4->TabIndex = 10;
			this->button4->Text = L"��������� ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(799, 429);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateDatabase();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� �������� �� ��������� �����, �������� textBox1, textBox2, textBox3 �� ���� �������� ����� �����.
	String^ name = textBox1->Text;
	int quantity = Convert::ToInt32(textBox2->Text);
	double price = Convert::ToDouble(textBox3->Text);

	// ����� ������� ��� ���������� ������
	AddRecord(name, quantity, price);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������� ��������� ������
	int selectedRowIndex = dataGridView1->CurrentCell->RowIndex;

	// �������� ������
	RemoveRecord(selectedRowIndex);
}
	   private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		   if (dataGridView1->SelectedRows->Count > 0) {
			   // ��������� ��������� ������
			   DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

			   // ���������� TextBox ���������� �� ��������� ������
			   textBox1->Text = selectedRow->Cells["��������"]->Value->ToString();
			   textBox2->Text = selectedRow->Cells["����������"]->Value->ToString();
			   textBox3->Text = selectedRow->Cells["����"]->Value->ToString();
		   }
	   }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) {
		// ��������� ��������� ������
		DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

		// ���������� �������� � ��������� ������
		selectedRow->Cells["��������"]->Value = textBox1->Text;
		selectedRow->Cells["����������"]->Value = textBox2->Text;
		selectedRow->Cells["����"]->Value = textBox3->Text;

		// ���������� ���� ������
		UpdateDatabase();
	}
}
};
}
