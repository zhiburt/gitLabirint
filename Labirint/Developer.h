#pragma once

namespace Labirint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Developer
	/// </summary>
	public ref class Developer : public System::Windows::Forms::Form
	{
	public:
		Developer(void)
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
		~Developer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Developer::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 29);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(656, 227);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(368, 29);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"This program was created by a student of\r\nBNTU, FITR, group 10701216.\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &Developer::label1_DoubleClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(369, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Developer Zhiburt Maxim Gennadievich\r\n";
			this->label2->DoubleClick += gcnew System::EventHandler(this, &Developer::label2_DoubleClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(367, 114);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(397, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"By script: this is my 1 program written with CLI/C++\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &Developer::label3_DoubleClick);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::SystemColors::InfoText;
			this->linkLabel1->Location = System::Drawing::Point(184, 25);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(153, 20);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"zhiburt@gmail.com";
			this->linkLabel1->VisitedLinkColor = System::Drawing::SystemColors::InfoText;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Developer::linkLabel1_LinkClicked);
			this->linkLabel1->MouseLeave += gcnew System::EventHandler(this, &Developer::linkLabel1_MouseLeave);
			this->linkLabel1->MouseHover += gcnew System::EventHandler(this, &Developer::linkLabel1_MouseHover);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->linkLabel2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->linkLabel1);
			this->groupBox1->Location = System::Drawing::Point(372, 150);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(337, 96);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Communications";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->LinkColor = System::Drawing::SystemColors::InfoText;
			this->linkLabel2->Location = System::Drawing::Point(184, 60);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(114, 20);
			this->linkLabel2->TabIndex = 4;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Maxim Zhiburt";
			this->linkLabel2->VisitedLinkColor = System::Drawing::SystemColors::InfoText;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Developer::linkLabel2_LinkClicked);
			this->linkLabel2->MouseLeave += gcnew System::EventHandler(this, &Developer::linkLabel2_MouseLeave);
			this->linkLabel2->MouseHover += gcnew System::EventHandler(this, &Developer::linkLabel2_MouseHover);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Telegram";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			// 
			// Developer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 269);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Developer";
			this->ShowIcon = false;
			this->Text = L"Developer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Load("D:\\Uni\\OAIP\\Coors\\Var 4\\Labirint\\Labirint\\MagicPrist1.png");
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Diagnostics::Process::Start("https://plus.google.com/u/0/106916198597965947871");
	
}
private: System::Void linkLabel1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	linkLabel1->LinkColor = Color::OrangeRed;
}
private: System::Void linkLabel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	linkLabel1->LinkColor = linkLabel1->VisitedLinkColor;
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	Diagnostics::Process::Start("https://t.me/Zhiburt");
}
private: System::Void linkLabel2_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	linkLabel2->LinkColor = Color::OrangeRed;
}
private: System::Void linkLabel2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	linkLabel2->LinkColor = linkLabel2->VisitedLinkColor;
}
private: System::Void label1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Load("D:\\Uni\\OAIP\\Coors\\Var 4\\Labirint\\Labirint\\MagicPrist2.png");
}
private: System::Void label3_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Load("D:\\Uni\\OAIP\\Coors\\Var 4\\Labirint\\Labirint\\MagicPrist3.png");
}
};
}
