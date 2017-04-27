#pragma once

namespace Labirint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ErorrList
	/// </summary>
	public ref class ErorrList : public System::Windows::Forms::Form
	{
	public:
		ErorrList(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ErorrList()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 88);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(641, 279);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"NumberErorr";
			this->columnHeader1->Width = 113;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"\r\nDescription";
			this->columnHeader2->Width = 332;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"\r\nTroubleshooting";
			this->columnHeader3->Width = 192;
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(1) { L"ERORR" });
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Erorr 2312", L"Erorr 118" });
			this->comboBox1->Location = System::Drawing::Point(169, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(324, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"Cheked in";
			this->comboBox1->SelectedValueChanged += gcnew System::EventHandler(this, &ErorrList::comboBox1_SelectedValueChanged);
			// 
			// ErorrList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 379);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ErorrList";
			this->ShowIcon = false;
			this->Text = L"ErorrList";
			this->ResumeLayout(false);

		}
#pragma endregion

		private: void add(String^ a, String^ b, String^ c) {
			ListViewItem^ ab = gcnew ListViewItem(a);
			ab->SubItems->Add(b);
			ab->SubItems->Add(c);
			listView1->Items->Add(ab);
			delete ab;
		}
	private: System::Void comboBox1_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->SelectedIndex == 0)
			add("203", "maxim\nad", "Dima");
	}
	};
}
