#pragma once
#include <Windows.h>


namespace internet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void);
		

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm2()
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
		void AddRecord(String^ name, int quantity, double price, double total);
		bool IsProductAvailable(String^ productName, int quantity);
		int GetProductQuantityInStock(String^ productName);
		void RemoveRecord(int rowIndex);
		OleDbConnection^ connection;
		OleDbDataAdapter^ adapter;
		DataTable^ dataTable;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Aqua;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(480, 216);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Plum;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�������� ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Plum;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(362, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Plum;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(187, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"��������� ";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Plum;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(544, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"�������";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(544, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(544, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(204, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(544, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(204, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(544, 197);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(204, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(541, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"�������� ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(541, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"����������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(541, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(541, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"����";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Plum;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(275, 317);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(156, 40);
			this->button5->TabIndex = 13;
			this->button5->Text = L"���������";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(767, 378);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm2";
			this->Text = L"������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateDatabase();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������� �������� �� ��������� �����
	String^ name = textBox1->Text;
	String^ quantityText = textBox2->Text;
	String^ priceText = textBox3->Text;

	// �������� ������� �������� � ��������� �����
	if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(quantityText) || String::IsNullOrWhiteSpace(priceText)) {
		MessageBox::Show("������: ��� ���� ������ ���� ���������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// �������� ������������ ����� ����������
	int quantity;
	if (!Int32::TryParse(quantityText, quantity) || quantity <= 0) {
		MessageBox::Show("������: ������������ �������� ��� ���������� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// �������� ������������ ����� ����
	double price;
	if (!Double::TryParse(priceText, price) || price <= 0.0) {
		MessageBox::Show("������: ������������ �������� ��� ���� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// ����������� �������� �����, ��������, ��� ������������ ���������� �� ����.
	double total = quantity * price;

	// ����� ������� ��� ���������� ������
	AddRecord(name, quantity, price, total);

	// ���������� �������� "����" � textBox4 (��������������, ��� textBox4 ������������ ��� ����������� "�����")
	textBox4->Text = total.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� ������� ��������� ������
	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show("������: ������� �������� ������ ��� ��������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// ��������� ��������� ������
	int selectedRowIndex = dataGridView1->CurrentCell->RowIndex;

	// ������������� ��������
	System::Windows::Forms::DialogResult result = MessageBox::Show("�� �������, ��� ������ ������� ������?", "������������� ��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	// �������� ���������� �������������
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// �������� ������
		RemoveRecord(selectedRowIndex);
	}
	// �����, ���� ������������ ������ "���" ��� "������", ������ �� ������
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// ������������� ���������� ������
	System::Windows::Forms::DialogResult result = MessageBox::Show("�� �������, ��� ������ ��������� �����?", "������������� ���������� ������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	// �������� ���������� �������������
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// ���������� ��������� � ���� ������
		UpdateDatabase();

		// ����� ��������� � ����������� ������
		MessageBox::Show("����� ��������.", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("������� ������ �� ������.", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MessageBox::Show("������� ������ �� �������.", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	// �����, ���� ������������ ������ "No" ��� "Cancel", ������ �� ������
}
};
}
