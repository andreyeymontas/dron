#include "MyForm2.h"
#include <Windows.h>

namespace internet {
    MyForm2::MyForm2(void)
    {
        InitializeComponent();
        InitializeDatabase();
    }

    void MyForm2::InitializeDatabase()
    {
        // ����������� � ���� ������
        String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\lucky\\Desktop\\internet\\internet\\x64\\Debug\\Test.mdb";
        connection = gcnew OleDbConnection(connectionString);

        // ������������� ��������
        adapter = gcnew OleDbDataAdapter("SELECT * FROM Orders", connection);
        dataTable = gcnew DataTable();

        // �������� ������ �� ���� ������ � DataTable
        adapter->Fill(dataTable);

        // �������� DataTable � DataGridView
        dataGridView1->DataSource = dataTable;
    }

    void MyForm2::UpdateDatabase()
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

    void MyForm2::AddRecord(String^ name, int quantity, double price, double total)
    {
        // �������� ������� ������ �� ������
        if (IsProductAvailable(name, quantity))
        {
            if (dataTable)
            {
                DataRow^ newRow = dataTable->NewRow();
                newRow["��������"] = name;
                newRow["����������"] = quantity;
                newRow["����"] = price;
                newRow["����"] = total;
                dataTable->Rows->Add(newRow);
                UpdateDatabase();
            }
            else
            {
                MessageBox::Show("������: ������� �� ����������������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
        else
        {
            MessageBox::Show("������ ��� �� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

    // ����� ��� �������� ������� ������ �� ������
    bool MyForm2::IsProductAvailable(String^ productName, int quantity)
    {
        // ����� ��� ����� �������� ��� �������� ������� ������ �� ������.
        // �� ������ ������������ ��� ������������ ��� ��� ��������� ������ �� ������� "Person".
        // ��������, �� ������ ���������, ���������� �� ������ �� ������ ��� ���������� ������.
        // ���� ������ ����������, ������� true; � ��������� ������ ������� false.
        // �����������, ��� � ��� ���� ����� GetProductQuantityInStock, ������� ���������� ���������� ������ �� ������.

        int quantityInStock = GetProductQuantityInStock(productName);

        return quantityInStock >= quantity;
    }

    // ������ ������ ��� ��������� ���������� ������ �� ������ (�������� ��� �� ��� �������� ���)
    int MyForm2::GetProductQuantityInStock(String^ productName)
    {
        // ��� ��� ��� ��������� ���������� ������ �� ������
        // ��� ������ ������, �������� ��� �� ��� �������� ���.
        // ��������, �� ������ ������������ ������ � ���� ������.
        // �����������, ��� � ��� ���� ������� "Person" � �������� "����������".

        String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\lucky\\Desktop\\internet\\internet\\x64\\Debug\\Test.mdb";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

        // �����������, ��� � ��� ���� ������� "����������" � ������� "Person".
        String^ query = "SELECT ���������� FROM Person WHERE �������� = ?";

        OleDbCommand^ command = gcnew OleDbCommand(query, connection);
        command->Parameters->Add(gcnew OleDbParameter("?", OleDbType::VarWChar))->Value = productName;

        try
        {
            connection->Open();
            Object^ result = command->ExecuteScalar();

            if (result != nullptr)
            {
                return Convert::ToInt32(result);
            }
            else
            {
                return 0; // ���� ������ � ����� ��������� �� �������, �����������, ��� ��� ���������� �� ������ ����� 0.
            }
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return 0;
        }
        finally
        {
            connection->Close();
        }
    }

    void MyForm2::RemoveRecord(int rowIndex)
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

