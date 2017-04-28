#pragma once
#include "BusinesLoginLabirint.h"
#include "ErorrList.h"
#include "Developer.h"
#include "Helper.h"

namespace Labirint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	LabirintComing MainLabirint;
	/// <summary>
	/// Summary for Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
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
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;








	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;





	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  developerToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ToolStripMenuItem^  erorrListToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Window::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->developerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->erorrListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(12, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(298, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Window::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(12, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(298, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Way";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Window::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Window::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Window::textBox2_KeyPress);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(12, 202);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(298, 76);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"DimensionBox";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Location = System::Drawing::Point(12, 284);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(298, 76);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"CoordinatesInitial";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(34, 33);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Window::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(168, 33);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 5;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Window::textBox4_KeyPress);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Location = System::Drawing::Point(12, 366);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(298, 76);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"CoordinatesFinite";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(34, 33);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 5;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Window::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(168, 33);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Window::textBox6_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(6, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 8;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 31);
			this->label2->TabIndex = 8;
			this->label2->Text = L"0";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(316, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(815, 584);
			this->listBox1->TabIndex = 9;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Window::listBox1_SelectedIndexChanged);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->helpToolStripMenuItem,
					this->developerToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->aboutToolStripMenuItem->Text = L"&About";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->helpToolStripMenuItem->Size = System::Drawing::Size(210, 26);
			this->helpToolStripMenuItem->Text = L"&Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::helpToolStripMenuItem_Click);
			// 
			// developerToolStripMenuItem
			// 
			this->developerToolStripMenuItem->Name = L"developerToolStripMenuItem";
			this->developerToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F2));
			this->developerToolStripMenuItem->Size = System::Drawing::Size(210, 26);
			this->developerToolStripMenuItem->Text = L"&Developer";
			this->developerToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::developerToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->erorrListToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1143, 28);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// erorrListToolStripMenuItem
			// 
			this->erorrListToolStripMenuItem->Name = L"erorrListToolStripMenuItem";
			this->erorrListToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F3;
			this->erorrListToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->erorrListToolStripMenuItem->Text = L"&ErorrList";
			this->erorrListToolStripMenuItem->Click += gcnew System::EventHandler(this, &Window::erorrListToolStripMenuItem_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Location = System::Drawing::Point(12, 448);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(134, 88);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Option";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 25);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->radioButton2->Size = System::Drawing::Size(111, 21);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NotDiogonal ";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 52);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->radioButton3->Size = System::Drawing::Size(105, 21);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"     Diogonal";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Location = System::Drawing::Point(180, 448);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(130, 88);
			this->groupBox5->TabIndex = 11;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Dimension";
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1143, 623);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Window";
			this->Text = L"Window";
			this->Load += gcnew System::EventHandler(this, &Window::Window_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void list_box_append(int x, int y, int **mass, bool resp) {
		String^ stringer;
		

		if (resp) {
			for (int i = 0; i < x; i++) {
				stringer = "";
				for (int j = 0; j < y; j++) {
					if (mass[i][j] == 1)
						stringer += "#" + " ";
					else
						stringer += " " + " ";
				}
				listBox1->Items->Add(stringer);
			}
		}
		else {
			for (int i = 0; i < x; i++) {
				stringer = "";
				for (int j = 0; j < y; j++) {
					if (mass[i][j] == 1)
						stringer += "#" + " ";
					else if (mass[i][j] == 2)
						stringer += "*" + " ";
					else
						stringer += " " + " ";
				}
				listBox1->Items->Add(stringer);
			}
		}
		delete stringer;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox3->Text != "" && textBox4->Text != "" &&
			textBox5->Text != "" && textBox6->Text != "" &&
			label1->Text != "0" && label2->Text != "0") {
			bool n1 = MainLabirint.DotPoisk(Convert::ToInt32(textBox3->Text), Convert::ToInt32(textBox4->Text));
			bool n2 = MainLabirint.UserToch(Convert::ToInt32(textBox5->Text), Convert::ToInt32(textBox6->Text));
			if (n1 && n2) {
				if (radioButton3->Checked) {
					int **pair_way = MainLabirint.FunctionLabirint();
					if (pair_way == NULL) {
						MessageBox::Show("Dont Way", "Way", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					}
					else {
						listBox1->Items->Clear();
						list_box_append(Convert::ToInt32(label1->Text), Convert::ToInt32(label2->Text), pair_way, false);
						MessageBox::Show("Right", "Way", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					}
				}
				else {
					int **pair_way = MainLabirint.FunctionLabirint(false);
					if (pair_way == NULL) {
						MessageBox::Show("Dont Way", "Way", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					}
					else {
						listBox1->Items->Clear();
						list_box_append(Convert::ToInt32(label1->Text), Convert::ToInt32(label2->Text), pair_way, false);
						MessageBox::Show("Right", "Way", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					}

				}
			}
			else {
				MessageBox::Show("Erorr 2312 : View ErorrList in Menu", "Erorr", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else{
			MessageBox::Show("Erorr 118 : View ErorrList in Menu", "Erorr", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
		if (textBox1->Text != "" && textBox2->Text != "") {
			label1->Text = textBox1->Text;
			label2->Text = textBox2->Text;
			int ** mass = MainLabirint.DimensionMaze(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
			list_box_append(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text), mass,true);
			MessageBox::Show(" - Labirint - ", "Generator", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			MessageBox::Show("Erorr 1037 : View ErorrList in Menu", "Erorr", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	Char ch = e->KeyChar;
	if (!ch.IsDigit(ch) && ch != 8) {
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	Char ch = e->KeyChar;
	if (!ch.IsDigit(ch) && ch != 8) {
		e->Handled = true;
	}
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	Char ch = e->KeyChar;
	if (!ch.IsDigit(ch) && ch != 8) {
		e->Handled = true;
	}
}
private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	Char ch = e->KeyChar;
	if (!ch.IsDigit(ch) && ch != 8) {
		e->Handled = true;
	}
}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	Char ch = e->KeyChar;
	if (!ch.IsDigit(ch) && ch != 8) {
		e->Handled = true;
	}
}
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	Char ch = e->KeyChar;
	if (!ch.IsDigit(ch) && ch != 8) {
		e->Handled = true;
	}
}
private: System::Void Window_Load(System::Object^  sender, System::EventArgs^  e) {
	radioButton2->Checked = true;
}
private: System::Void erorrListToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ErorrList^ n = gcnew ErorrList;
	n->ShowDialog();
	delete n;
}
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Helper^ helper_new = gcnew Helper;
	helper_new->ShowDialog();
	delete helper_new;
}
private: System::Void developerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Developer^ im_am_loy_programer = gcnew Developer;
	im_am_loy_programer->ShowDialog();
	delete im_am_loy_programer;
}
};
}
