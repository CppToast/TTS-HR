#pragma once
#include "MyForm1.h"
#include <string>
#include <windows.h>
#include <algorithm>
#include <mmsystem.h>
#include "resource.h"

namespace TTSHR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  button3;






	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ovdje unesite tekst koji želite da se izgovori:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 31);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(477, 213);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(280, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Izgovori";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(382, 250);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"O programu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 283);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->statusStrip1->Size = System::Drawing::Size(501, 22);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(53, 17);
			this->toolStripStatusLabel1->Text = L"Spreman.";
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &MyForm::toolStripStatusLabel1_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &MyForm::backgroundWorker1_RunWorkerCompleted);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(298, 250);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Zaustavi";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(501, 305);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(354, 150);
			this->Name = L"MyForm";
			this->Text = L"TTS HR ALPHA 1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		button3->Enabled = true;
		button1->Enabled = false;
		backgroundWorker1->RunWorkerAsync(1);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ about = gcnew MyForm1;
		about->Show();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	String ^ read=textBox1 -> Text;
	String ^ text = "";
	int temp;
	bool dont_say_it;
	for (int i = 0; i < read->Length; i++) {
		temp = read[i];
		if (temp >= 65 && temp <= 90) {
			temp += 32;
		}
		if (temp == 268 || temp == 262 || temp == 272 || temp == 352 || temp == 381) {
			temp += 1;
		}
		text += (char16_t)temp;
	}
	text += ' ';
	for (int i = 0; i < read->Length; i++) {
		if (text[i] == 97) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_a), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 98) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_b), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 99) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_c), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 269) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_ch), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 263) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_cs), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 100) {
			if (text[i + 1] == 382) {
				toolStripStatusLabel1->Text = "Izgovaram: " + text[i] + text[i+1];
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_dh), NULL, SND_RESOURCE);
				i++;
			}
			else {
				toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_d), NULL, SND_RESOURCE);
			}
		}
		else
		if (text[i] == 273) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_ds), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 101) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 102) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_f), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 103) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_g), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 104) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_h), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 105) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_i), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 106) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_j), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 107) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_k), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 108) {
			if (text[i + 1] == 106) {
				toolStripStatusLabel1->Text = "Izgovaram: " + text[i] + text[i+1];
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_lj), NULL, SND_RESOURCE);
				i++;
			}
			else {
				toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_l), NULL, SND_RESOURCE);
			}
		}
		else
		if (text[i] == 109) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_m), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 110) {
			if (text[i + 1] == 106) {
				toolStripStatusLabel1->Text = "Izgovaram: " + text[i] + text[i];
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_nj), NULL, SND_RESOURCE);
				i++;
			}
			else {
				toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_n), NULL, SND_RESOURCE);
			}
		}
		else
		if (text[i] == 111) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_o), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 112) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_p), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 114) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			dont_say_it = 0;
			if (i > 0) {
				if (!(text[i - 1] != 97 && text[i - 1] != 101 && text[i - 1] != 105 && text[i - 1] != 111 && text[i - 1] != 117)) {
					dont_say_it = 1;
				}
			}
			if (((text[i + 1] >= 98 && text[i + 1] <= 122 && text[i + 1] != 97 && text[i + 1] != 101 && text[i + 1] != 105 && text[i + 1] != 111 && text[i + 1] != 117)|| text[i + 1] == 269 && text[i + 1] == 263 && text[i + 1] == 273 && text[i + 1] == 353 && text[i + 1] == 382)&& dont_say_it==0) {
				PlaySound(MAKEINTRESOURCE(IDR_WAVE_1), NULL, SND_RESOURCE);
			}
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_r), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 115) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_s), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 353) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_sh), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 116) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_t), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 117) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_u), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 118) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_v), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 122) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_z), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 382) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_zh), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 47) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_1), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 48) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_n), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_u), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_l), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_a), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 49) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_j), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_d), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_a), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_n), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 50) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_d), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_v), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_a), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 51) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_t), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_r), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_i), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 52) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_ch), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_t), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_i), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_r), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_i), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 53) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_p), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_t), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 54) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_sh), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_s), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_t), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 55) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_s), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_d), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_a), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_m), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 56) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_o), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_s), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_a), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_m), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 57) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_d), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_v), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_e), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_t), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 113) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_k), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_v), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 120) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_k), NULL, SND_RESOURCE);
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_s), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 121) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_j), NULL, SND_RESOURCE);
		}
		else
		if (text[i] == 119) {
			toolStripStatusLabel1->Text = "Izgovaram: " + text[i];
			PlaySound(MAKEINTRESOURCE(IDR_WAVE_v), NULL, SND_RESOURCE);
		}
		else {
			toolStripStatusLabel1->Text = "Stanka...";
			Sleep(100);
		}
		if (backgroundWorker1->CancellationPending){
			i=read->Length;
		}
	}
	return;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	backgroundWorker1->CancelAsync();
	button1->Enabled = true;
	button3->Enabled = false;
	toolStripStatusLabel1->Text = "Spreman.";
}
private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
	button1->Enabled = true;
	button3->Enabled = false;
	toolStripStatusLabel1->Text = "Spreman.";
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
