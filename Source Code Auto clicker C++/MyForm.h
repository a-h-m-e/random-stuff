#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
namespace AutoClickerCPP {

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
	private: System::Windows::Forms::ComboBox^ Speed;
	private: System::Windows::Forms::Label^ X;
	private: System::Windows::Forms::Label^ minimize;
	private: System::Windows::Forms::Button^ L;
	private: System::Windows::Forms::Button^ R;
	private: System::Windows::Forms::ComboBox^ StartKeyBox;
	private: System::Windows::Forms::ComboBox^ StopKeyBox;
	private: System::Windows::Forms::Label^ StartKeyLabel;
	private: System::Windows::Forms::Label^ StopKeyLabel;
	private: System::Windows::Forms::Label^ SpeedLabel;





	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Speed = (gcnew System::Windows::Forms::ComboBox());
			this->X = (gcnew System::Windows::Forms::Label());
			this->minimize = (gcnew System::Windows::Forms::Label());
			this->L = (gcnew System::Windows::Forms::Button());
			this->R = (gcnew System::Windows::Forms::Button());
			this->StartKeyBox = (gcnew System::Windows::Forms::ComboBox());
			this->StopKeyBox = (gcnew System::Windows::Forms::ComboBox());
			this->StartKeyLabel = (gcnew System::Windows::Forms::Label());
			this->StopKeyLabel = (gcnew System::Windows::Forms::Label());
			this->SpeedLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Speed
			// 
			this->Speed->BackColor = System::Drawing::Color::DarkOrange;
			this->Speed->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Speed->ForeColor = System::Drawing::Color::White;
			this->Speed->FormattingEnabled = true;
			this->Speed->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"5", L"7", L"10", L"12", L"15", L"20", L"40", L"50",
					L"80", L"100"
			});
			this->Speed->Location = System::Drawing::Point(83, 38);
			this->Speed->Margin = System::Windows::Forms::Padding(0);
			this->Speed->Name = L"Speed";
			this->Speed->Size = System::Drawing::Size(121, 21);
			this->Speed->TabIndex = 0;
			// 
			// X
			// 
			this->X->AutoSize = true;
			this->X->Location = System::Drawing::Point(271, 0);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(13, 13);
			this->X->TabIndex = 1;
			this->X->Text = L"x";
			this->X->Click += gcnew System::EventHandler(this, &MyForm::X_Click);
			// 
			// minimize
			// 
			this->minimize->AutoSize = true;
			this->minimize->Location = System::Drawing::Point(254, 0);
			this->minimize->Name = L"minimize";
			this->minimize->Size = System::Drawing::Size(11, 13);
			this->minimize->TabIndex = 2;
			this->minimize->Text = L"-";
			this->minimize->Click += gcnew System::EventHandler(this, &MyForm::minimize_Click);
			// 
			// L
			// 
			this->L->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->L->FlatAppearance->BorderSize = 0;
			this->L->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->L->Location = System::Drawing::Point(83, 82);
			this->L->Name = L"L";
			this->L->Size = System::Drawing::Size(50, 50);
			this->L->TabIndex = 3;
			this->L->Text = L"L";
			this->L->UseVisualStyleBackColor = false;
			this->L->Click += gcnew System::EventHandler(this, &MyForm::L_Click);
			this->L->MouseEnter += gcnew System::EventHandler(this, &MyForm::L_MouseEnter);
			this->L->MouseLeave += gcnew System::EventHandler(this, &MyForm::L_MouseLeave);
			// 
			// R
			// 
			this->R->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->R->FlatAppearance->BorderSize = 0;
			this->R->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->R->Location = System::Drawing::Point(154, 82);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(50, 50);
			this->R->TabIndex = 4;
			this->R->Text = L"R";
			this->R->UseVisualStyleBackColor = false;
			this->R->Click += gcnew System::EventHandler(this, &MyForm::R_Click);
			this->R->MouseEnter += gcnew System::EventHandler(this, &MyForm::R_MouseEnter);
			this->R->MouseLeave += gcnew System::EventHandler(this, &MyForm::R_MouseLeave);
			// 
			// StartKeyBox
			// 
			this->StartKeyBox->BackColor = System::Drawing::Color::DarkOrange;
			this->StartKeyBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->StartKeyBox->ForeColor = System::Drawing::Color::White;
			this->StartKeyBox->FormattingEnabled = true;
			this->StartKeyBox->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"NumPad 0", L"NumPad 1", L"NumPad 2", L"NumPad 3",
					L"NumPad 4", L"NumPad 5", L"NumPad 6", L"NumPad 7", L"NumPad 8", L"NumPad 9", L"-"
			});
			this->StartKeyBox->Location = System::Drawing::Point(83, 159);
			this->StartKeyBox->Margin = System::Windows::Forms::Padding(0);
			this->StartKeyBox->Name = L"StartKeyBox";
			this->StartKeyBox->Size = System::Drawing::Size(121, 21);
			this->StartKeyBox->TabIndex = 5;
			// 
			// StopKeyBox
			// 
			this->StopKeyBox->BackColor = System::Drawing::Color::DarkOrange;
			this->StopKeyBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->StopKeyBox->ForeColor = System::Drawing::Color::White;
			this->StopKeyBox->FormattingEnabled = true;
			this->StopKeyBox->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"NumPad 0", L"NumPad 1", L"NumPad 2", L"NumPad 3",
					L"NumPad 4", L"NumPad 5", L"NumPad 6", L"NumPad 7", L"NumPad 8", L"NumPad 9", L"-"
			});
			this->StopKeyBox->Location = System::Drawing::Point(83, 204);
			this->StopKeyBox->Margin = System::Windows::Forms::Padding(0);
			this->StopKeyBox->Name = L"StopKeyBox";
			this->StopKeyBox->Size = System::Drawing::Size(121, 21);
			this->StopKeyBox->TabIndex = 6;
			// 
			// StartKeyLabel
			// 
			this->StartKeyLabel->AutoSize = true;
			this->StartKeyLabel->Location = System::Drawing::Point(83, 143);
			this->StartKeyLabel->Name = L"StartKeyLabel";
			this->StartKeyLabel->Size = System::Drawing::Size(52, 13);
			this->StartKeyLabel->TabIndex = 7;
			this->StartKeyLabel->Text = L"Start Key";
			// 
			// StopKeyLabel
			// 
			this->StopKeyLabel->AutoSize = true;
			this->StopKeyLabel->Location = System::Drawing::Point(83, 187);
			this->StopKeyLabel->Name = L"StopKeyLabel";
			this->StopKeyLabel->Size = System::Drawing::Size(50, 13);
			this->StopKeyLabel->TabIndex = 8;
			this->StopKeyLabel->Text = L"Stop Key";
			// 
			// SpeedLabel
			// 
			this->SpeedLabel->AutoSize = true;
			this->SpeedLabel->Location = System::Drawing::Point(83, 23);
			this->SpeedLabel->Name = L"SpeedLabel";
			this->SpeedLabel->Size = System::Drawing::Size(61, 13);
			this->SpeedLabel->TabIndex = 9;
			this->SpeedLabel->Text = L"Speed (ms)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->SpeedLabel);
			this->Controls->Add(this->StopKeyLabel);
			this->Controls->Add(this->StartKeyLabel);
			this->Controls->Add(this->StopKeyBox);
			this->Controls->Add(this->StartKeyBox);
			this->Controls->Add(this->R);
			this->Controls->Add(this->L);
			this->Controls->Add(this->minimize);
			this->Controls->Add(this->X);
			this->Controls->Add(this->Speed);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Opacity = 0.85;
			this->Text = L"AutoClicker";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->DoubleClick += gcnew System::EventHandler(this, &MyForm::MyForm_DoubleClick);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool LeftClick = true;
		int StartKey;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout << "Setup Finished" << std::endl;
		ShowWindow(::GetConsoleWindow(), SW_HIDE);
	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int delay = 0;
		if (!String::IsNullOrEmpty(Speed->Text) && !String::IsNullOrWhiteSpace(Speed->Text))
		{
			delay = System::Int32::Parse(Speed->Text);

			if (GetAsyncKeyState(GetStartKey()))
			{
				while (true)
				{
					INPUT input = { 0 };
					input.type = INPUT_MOUSE;
					if (LeftClick)input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
					else if (!LeftClick) input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
					SendInput(1, &input, sizeof(input));
					ZeroMemory(&input, sizeof(input));
					Sleep(delay);
					input.type = INPUT_MOUSE;
					if (LeftClick)input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
					else if (!LeftClick) input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
					SendInput(1, &input, sizeof(input));
					Sleep(delay);
					if (GetAsyncKeyState(GetStopKey()))break;
				}
			}
		}
		else MessageBox::Show("No value was defined");
	}
	private: System::Int32 GetStartKey() {
		if (StartKeyBox->Text == "NumPad 0")return VK_NUMPAD0;
		if (StartKeyBox->Text == "NumPad 1")return VK_NUMPAD1;
		if (StartKeyBox->Text == "NumPad 2")return VK_NUMPAD2;
		if (StartKeyBox->Text == "NumPad 3")return VK_NUMPAD3;
		if (StartKeyBox->Text == "NumPad 4")return VK_NUMPAD4;
		if (StartKeyBox->Text == "NumPad 5")return VK_NUMPAD5;
		if (StartKeyBox->Text == "NumPad 6")return VK_NUMPAD6;
		if (StartKeyBox->Text == "NumPad 7")return VK_NUMPAD7;
		if (StartKeyBox->Text == "NumPad 8")return VK_NUMPAD8;
		if (StartKeyBox->Text == "NumPad 9")return VK_NUMPAD9;

		if (StartKeyBox->Text == "-")return VK_OEM_MINUS;
		else return NULL;
	}
	private: System::Int32 GetStopKey() {
		if (StopKeyBox->Text == "NumPad 0")return VK_NUMPAD0;
		if (StopKeyBox->Text == "NumPad 1")return VK_NUMPAD1;
		if (StopKeyBox->Text == "NumPad 2")return VK_NUMPAD2;
		if (StopKeyBox->Text == "NumPad 3")return VK_NUMPAD3;
		if (StopKeyBox->Text == "NumPad 4")return VK_NUMPAD4;
		if (StopKeyBox->Text == "NumPad 5")return VK_NUMPAD5;
		if (StopKeyBox->Text == "NumPad 6")return VK_NUMPAD6;
		if (StopKeyBox->Text == "NumPad 7")return VK_NUMPAD7;
		if (StopKeyBox->Text == "NumPad 8")return VK_NUMPAD8;
		if (StopKeyBox->Text == "NumPad 9")return VK_NUMPAD9;

		if (StopKeyBox->Text == "-")return VK_OEM_MINUS;
		else return NULL;
	}
		   int mX = 0;
		   int mY = 0;
		   bool mD;
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mD = true;
		mX = e->X;
		mY = e->Y;
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (mD) {
			this->SetDesktopLocation(MousePosition.X - mX, MousePosition.Y - mY);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mD = false;
	}
	private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
		   bool hidden = false;
	private: System::Void MyForm_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (hidden) {
			Speed->Visible = false;
			Speed->Enabled = false;
			R->Visible = false;
			R->Enabled = false;
			L->Visible = false;
			L->Enabled = false;
			StartKeyBox->Visible = false;
			StartKeyBox->Enabled = false;
			StopKeyBox->Visible = false;
			StopKeyBox->Enabled = false;
			SpeedLabel->Visible = false;
			StartKeyLabel->Visible = false;
			StopKeyLabel->Visible = false;
			hidden = false;
		}
		else if (!hidden) {
			Speed->Visible = true;
			Speed->Enabled = true;
			R->Visible = true;
			R->Enabled = true;
			L->Visible = true;
			L->Enabled = true;
			StartKeyBox->Visible = true;
			StartKeyBox->Enabled = true;
			StopKeyBox->Visible = true;
			StopKeyBox->Enabled = true;
			SpeedLabel->Visible = true;
			StartKeyLabel->Visible = true;
			StopKeyLabel->Visible = true;
			hidden = true;
		}
	}

	private: System::Void R_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		R->BackColor = Color::Orange;
	}
	private: System::Void R_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		R->BackColor = Color::FromArgb(70, 70, 70);
		checkState(false);
	}
	private: System::Void R_Click(System::Object^ sender, System::EventArgs^ e) {
		R->BackColor = Color::Orange;
		L->BackColor = Color::FromArgb(70, 70, 70);
		if (LeftClick)LeftClick = false;
	}
	private: System::Void L_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		L->BackColor = Color::Orange;
	}
	private: System::Void L_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		L->BackColor = Color::FromArgb(70, 70, 70);
		checkState(true);
	}
	private: System::Void L_Click(System::Object^ sender, System::EventArgs^ e) {
		L->BackColor = Color::Orange;
		R->BackColor = Color::FromArgb(70, 70, 70);
		if (!LeftClick)LeftClick = true;
	}
	private: System::Void checkState(bool OutFromLeft) {
		if (OutFromLeft && LeftClick) {
			L->BackColor = Color::Orange;
		}
		else if (OutFromLeft && !LeftClick) {
			return;
		}
		if (!OutFromLeft && !LeftClick) {
			R->BackColor = Color::Orange;
		}
		else if (!OutFromLeft && LeftClick) {
			return;
		}
	}
	};
}
