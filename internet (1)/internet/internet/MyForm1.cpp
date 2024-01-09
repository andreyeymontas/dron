#include "MyForm1.h"
#include <Windows.h>

namespace internet {
    MyForm1::MyForm1(void)
    {
        InitializeComponent();
        InitializeDatabase();
    }
    
    void MyForm1::InitializeDatabase()
    {
        // ����������� � ���� ������
        String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\lucky\\Desktop\\internet (1)\\internet\\x64\\Debug\\Test.mdb";
        connection = gcnew OleDbConnection(connectionString);

        // ������������� ��������
        adapter = gcnew OleDbDataAdapter("SELECT * FROM Person", connection);
        dataTable = gcnew DataTable();

        // �������� ������ �� ���� ������ � DataTable
        adapter->Fill(dataTable);

        // �������� DataTable � DataGridView
        dataGridView1->DataSource = dataTable;
    }

    void MyForm1::UpdateDatabase()
    {
        if (adapter && dataTable) // ��������, ��� ������� ����������������
        {
            // ���������� ���� ������
            OleDbCommandBuilder^ builder = gcnew OleDbCommandBuilder(adapter);
            adapter->Update(dataTable);
        }
        else
        {
            // ��������� ������: ������� �� ����������������
            MessageBox::Show("������: ������� ��� ������� �� ����������������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    void MyForm1::AddRecord(String^ name, int quantity, double price)
    {
        if (dataTable)
        {
            DataRow^ newRow = dataTable->NewRow();
            newRow["��������"] = name;
            newRow["����������"] = quantity;
            newRow["����"] = price;
            dataTable->Rows->Add(newRow);
            UpdateDatabase();

            // ��������� ���������� ������������ �������������� (ID)
            OleDbCommand^ cmd = gcnew OleDbCommand("SELECT @@Identity", connection);
            connection->Open();
            int lastInsertedId = Convert::ToInt32(cmd->ExecuteScalar());
            connection->Close();

            // ������ � ��� ���� lastInsertedId, ������� �������� �������� ID ��������� ����������� ������.
            // ������ ������������ ��� �� ������ ����������.
        }
        else
        {
            MessageBox::Show("������: ������� �� ����������������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    void MyForm1::RemoveRecord(int rowIndex)
    {
        if (dataTable) // ��������, ��� ������ ���������������
        {
            // �������� ������ �� ���� ������
            dataTable->Rows[rowIndex]->Delete();
            UpdateDatabase();
        }
        else
        {
            // ��������� ������: ������ �� ���������������
            MessageBox::Show("������: ������� �� ����������������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
