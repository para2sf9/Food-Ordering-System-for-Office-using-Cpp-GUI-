#pragma once

namespace miniproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

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
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &miniproject::MyForm::MyForm_FormClosing);
			clearingTextboxes = false;
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
	private: bool clearingTextboxes;
	private: System::Windows::Forms::TextBox^ t2;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Button^ placeOrder;
	private: System::Windows::Forms::Label^ MasalaDosa;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ t10;

	private: System::Windows::Forms::Label^ cholebhatura;

	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::TextBox^ t7;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ paneer;

	private: System::Windows::Forms::Label^ butterchiken;

	private: System::Windows::Forms::Label^ dhokla;
	private: System::Windows::Forms::TextBox^ t12;


	private: System::Windows::Forms::TextBox^ t9;

	private: System::Windows::Forms::TextBox^ t6;

	private: System::Windows::Forms::TextBox^ t3;
	private: System::Windows::Forms::TextBox^ t11;


	private: System::Windows::Forms::TextBox^ t8;

	private: System::Windows::Forms::TextBox^ t5;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ pizza;

	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ upma;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ idlli;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ t4;

	private: System::Windows::Forms::Label^ poha;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ Sandwich;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ vadapav;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ t1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Misalpav;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ LogoutButton;
private: System::Windows::Forms::Label^ lblUsername;
private: System::Windows::Forms::Label^ lblLoginTime;


	   protected:
		   virtual property System::Windows::Forms::CreateParams^ CreateParams{
			   System::Windows::Forms::CreateParams ^ get() override {
				   System::Windows::Forms::CreateParams^ cp = Form::CreateParams;
				   cp->ExStyle |= 0x02000000; // Enable WS_EX_COMPOSITED
				   return cp;
			   }
		   }








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->placeOrder = (gcnew System::Windows::Forms::Button());
			this->MasalaDosa = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->t10 = (gcnew System::Windows::Forms::TextBox());
			this->cholebhatura = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->t7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->paneer = (gcnew System::Windows::Forms::Label());
			this->butterchiken = (gcnew System::Windows::Forms::Label());
			this->dhokla = (gcnew System::Windows::Forms::Label());
			this->t12 = (gcnew System::Windows::Forms::TextBox());
			this->t9 = (gcnew System::Windows::Forms::TextBox());
			this->t6 = (gcnew System::Windows::Forms::TextBox());
			this->t3 = (gcnew System::Windows::Forms::TextBox());
			this->t11 = (gcnew System::Windows::Forms::TextBox());
			this->t8 = (gcnew System::Windows::Forms::TextBox());
			this->t5 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->upma = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->Sandwich = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->idlli = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->vadapav = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pizza = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->poha = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Misalpav = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->t4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblLoginTime = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// t2
			// 
			this->t2->AllowDrop = true;
			this->t2->BackColor = System::Drawing::SystemColors::Window;
			this->t2->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t2->Location = System::Drawing::Point(515, 63);
			this->t2->MaxLength = 1;
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(44, 29);
			this->t2->TabIndex = 49;
			this->t2->Tag = L"";
			this->t2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t2->TextChanged += gcnew System::EventHandler(this, &MyForm::t2_TextChanged);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox12->Location = System::Drawing::Point(608, 285);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(96, 71);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 48;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox11->Location = System::Drawing::Point(608, 122);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(96, 71);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 47;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox10->Location = System::Drawing::Point(608, 42);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(96, 71);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 46;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// placeOrder
			// 
			this->placeOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)));
			this->placeOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->placeOrder->ForeColor = System::Drawing::Color::White;
			this->placeOrder->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->placeOrder->Location = System::Drawing::Point(378, 372);
			this->placeOrder->Name = L"placeOrder";
			this->placeOrder->Size = System::Drawing::Size(129, 35);
			this->placeOrder->TabIndex = 45;
			this->placeOrder->Text = L"Place Order";
			this->placeOrder->UseVisualStyleBackColor = false;
			this->placeOrder->Click += gcnew System::EventHandler(this, &MyForm::placeOrder_Click);
			// 
			// MasalaDosa
			// 
			this->MasalaDosa->AutoSize = true;
			this->MasalaDosa->BackColor = System::Drawing::Color::Transparent;
			this->MasalaDosa->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MasalaDosa->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->MasalaDosa->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->MasalaDosa->Location = System::Drawing::Point(4, 1);
			this->MasalaDosa->Name = L"MasalaDosa";
			this->MasalaDosa->Size = System::Drawing::Size(75, 25);
			this->MasalaDosa->TabIndex = 41;
			this->MasalaDosa->Text = L"Masala";
			this->MasalaDosa->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MasalaDosa->Click += gcnew System::EventHandler(this, &MyForm::labelSausage_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox7->Location = System::Drawing::Point(608, 203);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(96, 71);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 40;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// t10
			// 
			this->t10->AllowDrop = true;
			this->t10->BackColor = System::Drawing::SystemColors::Window;
			this->t10->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t10->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t10->Location = System::Drawing::Point(220, 306);
			this->t10->MaxLength = 1;
			this->t10->Name = L"t10";
			this->t10->Size = System::Drawing::Size(44, 29);
			this->t10->TabIndex = 37;
			this->t10->Tag = L"";
			this->t10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t10->TextChanged += gcnew System::EventHandler(this, &MyForm::t10_TextChanged);
			// 
			// cholebhatura
			// 
			this->cholebhatura->AutoSize = true;
			this->cholebhatura->BackColor = System::Drawing::Color::Transparent;
			this->cholebhatura->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cholebhatura->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->cholebhatura->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->cholebhatura->Location = System::Drawing::Point(12, 1);
			this->cholebhatura->Name = L"cholebhatura";
			this->cholebhatura->Size = System::Drawing::Size(57, 25);
			this->cholebhatura->TabIndex = 36;
			this->cholebhatura->Text = L"Chole";
			this->cholebhatura->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cholebhatura->Click += gcnew System::EventHandler(this, &MyForm::labelPancake_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox8->Location = System::Drawing::Point(26, 285);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(96, 71);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 35;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// t7
			// 
			this->t7->AllowDrop = true;
			this->t7->BackColor = System::Drawing::SystemColors::Window;
			this->t7->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t7->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t7->Location = System::Drawing::Point(220, 227);
			this->t7->MaxLength = 1;
			this->t7->Name = L"t7";
			this->t7->Size = System::Drawing::Size(44, 29);
			this->t7->TabIndex = 32;
			this->t7->Tag = L"";
			this->t7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t7->TextChanged += gcnew System::EventHandler(this, &MyForm::t7_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(588, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 34);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Office";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// paneer
			// 
			this->paneer->AutoSize = true;
			this->paneer->BackColor = System::Drawing::Color::Transparent;
			this->paneer->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->paneer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->paneer->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->paneer->Location = System::Drawing::Point(6, 1);
			this->paneer->Name = L"paneer";
			this->paneer->Size = System::Drawing::Size(69, 25);
			this->paneer->TabIndex = 59;
			this->paneer->Text = L"Paneer";
			this->paneer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->paneer->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// butterchiken
			// 
			this->butterchiken->AutoSize = true;
			this->butterchiken->BackColor = System::Drawing::Color::Transparent;
			this->butterchiken->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->butterchiken->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->butterchiken->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->butterchiken->Location = System::Drawing::Point(6, 1);
			this->butterchiken->Name = L"butterchiken";
			this->butterchiken->Size = System::Drawing::Size(68, 25);
			this->butterchiken->TabIndex = 58;
			this->butterchiken->Text = L"Butter";
			this->butterchiken->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->butterchiken->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// dhokla
			// 
			this->dhokla->AutoSize = true;
			this->dhokla->BackColor = System::Drawing::Color::Transparent;
			this->dhokla->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dhokla->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->dhokla->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dhokla->Location = System::Drawing::Point(5, 12);
			this->dhokla->Name = L"dhokla";
			this->dhokla->Size = System::Drawing::Size(73, 25);
			this->dhokla->TabIndex = 57;
			this->dhokla->Text = L"Dhokla";
			this->dhokla->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->dhokla->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// t12
			// 
			this->t12->AllowDrop = true;
			this->t12->BackColor = System::Drawing::SystemColors::Window;
			this->t12->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t12->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t12->Location = System::Drawing::Point(808, 306);
			this->t12->MaxLength = 1;
			this->t12->Name = L"t12";
			this->t12->Size = System::Drawing::Size(44, 29);
			this->t12->TabIndex = 56;
			this->t12->Tag = L"";
			this->t12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t12->TextChanged += gcnew System::EventHandler(this, &MyForm::t12_TextChanged);
			// 
			// t9
			// 
			this->t9->AllowDrop = true;
			this->t9->BackColor = System::Drawing::SystemColors::Window;
			this->t9->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t9->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t9->Location = System::Drawing::Point(808, 224);
			this->t9->MaxLength = 1;
			this->t9->Name = L"t9";
			this->t9->Size = System::Drawing::Size(44, 29);
			this->t9->TabIndex = 55;
			this->t9->Tag = L"";
			this->t9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t9->TextChanged += gcnew System::EventHandler(this, &MyForm::t9_TextChanged);
			// 
			// t6
			// 
			this->t6->AllowDrop = true;
			this->t6->BackColor = System::Drawing::SystemColors::Window;
			this->t6->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t6->Location = System::Drawing::Point(808, 142);
			this->t6->MaxLength = 1;
			this->t6->Name = L"t6";
			this->t6->Size = System::Drawing::Size(44, 29);
			this->t6->TabIndex = 54;
			this->t6->Tag = L"";
			this->t6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t6->TextChanged += gcnew System::EventHandler(this, &MyForm::t6_TextChanged);
			// 
			// t3
			// 
			this->t3->AllowDrop = true;
			this->t3->BackColor = System::Drawing::SystemColors::Window;
			this->t3->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t3->Location = System::Drawing::Point(808, 65);
			this->t3->MaxLength = 1;
			this->t3->Name = L"t3";
			this->t3->Size = System::Drawing::Size(44, 29);
			this->t3->TabIndex = 53;
			this->t3->Tag = L"";
			this->t3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t3->TextChanged += gcnew System::EventHandler(this, &MyForm::t3_TextChanged);
			// 
			// t11
			// 
			this->t11->AllowDrop = true;
			this->t11->BackColor = System::Drawing::SystemColors::Window;
			this->t11->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t11->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t11->Location = System::Drawing::Point(515, 307);
			this->t11->MaxLength = 1;
			this->t11->Name = L"t11";
			this->t11->Size = System::Drawing::Size(44, 29);
			this->t11->TabIndex = 52;
			this->t11->Tag = L"";
			this->t11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t11->TextChanged += gcnew System::EventHandler(this, &MyForm::t11_TextChanged);
			// 
			// t8
			// 
			this->t8->AllowDrop = true;
			this->t8->BackColor = System::Drawing::SystemColors::Window;
			this->t8->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t8->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t8->Location = System::Drawing::Point(515, 226);
			this->t8->MaxLength = 1;
			this->t8->Name = L"t8";
			this->t8->Size = System::Drawing::Size(44, 29);
			this->t8->TabIndex = 51;
			this->t8->Tag = L"";
			this->t8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t8->TextChanged += gcnew System::EventHandler(this, &MyForm::t8_TextChanged);
			// 
			// t5
			// 
			this->t5->AllowDrop = true;
			this->t5->BackColor = System::Drawing::SystemColors::Window;
			this->t5->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t5->Location = System::Drawing::Point(515, 144);
			this->t5->MaxLength = 1;
			this->t5->Name = L"t5";
			this->t5->Size = System::Drawing::Size(44, 29);
			this->t5->TabIndex = 50;
			this->t5->Tag = L"";
			this->t5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t5->TextChanged += gcnew System::EventHandler(this, &MyForm::t5_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->t12);
			this->panel1->Controls->Add(this->t9);
			this->panel1->Controls->Add(this->t6);
			this->panel1->Controls->Add(this->t3);
			this->panel1->Controls->Add(this->t11);
			this->panel1->Controls->Add(this->t8);
			this->panel1->Controls->Add(this->t5);
			this->panel1->Controls->Add(this->t2);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->placeOrder);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->t10);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->t7);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->t4);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->t1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(75, 111);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(879, 423);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::MintCream;
			this->panel13->Controls->Add(this->label14);
			this->panel13->Controls->Add(this->paneer);
			this->panel13->Location = System::Drawing::Point(713, 297);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(85, 49);
			this->panel13->TabIndex = 71;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(7, 21);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 25);
			this->label14->TabIndex = 72;
			this->label14->Text = L"Bhurji";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::MintCream;
			this->panel12->Controls->Add(this->label13);
			this->panel12->Controls->Add(this->MasalaDosa);
			this->panel12->Location = System::Drawing::Point(713, 216);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(85, 49);
			this->panel12->TabIndex = 70;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(12, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 25);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Dosa";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::MintCream;
			this->panel11->Controls->Add(this->upma);
			this->panel11->Location = System::Drawing::Point(713, 133);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(85, 49);
			this->panel11->TabIndex = 69;
			// 
			// upma
			// 
			this->upma->AutoSize = true;
			this->upma->BackColor = System::Drawing::Color::Transparent;
			this->upma->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->upma->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->upma->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->upma->Location = System::Drawing::Point(10, 12);
			this->upma->Name = L"upma";
			this->upma->Size = System::Drawing::Size(63, 25);
			this->upma->TabIndex = 26;
			this->upma->Text = L"Upma";
			this->upma->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->upma->Click += gcnew System::EventHandler(this, &MyForm::labelChips_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::MintCream;
			this->panel10->Controls->Add(this->Sandwich);
			this->panel10->Location = System::Drawing::Point(713, 54);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(85, 49);
			this->panel10->TabIndex = 68;
			// 
			// Sandwich
			// 
			this->Sandwich->AutoSize = true;
			this->Sandwich->BackColor = System::Drawing::Color::Transparent;
			this->Sandwich->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Sandwich->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->Sandwich->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Sandwich->Location = System::Drawing::Point(-2, 12);
			this->Sandwich->Name = L"Sandwich";
			this->Sandwich->Size = System::Drawing::Size(88, 24);
			this->Sandwich->TabIndex = 11;
			this->Sandwich->Text = L"Sandwich";
			this->Sandwich->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Sandwich->Click += gcnew System::EventHandler(this, &MyForm::labelSandwich_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::MintCream;
			this->panel9->Controls->Add(this->label15);
			this->panel9->Controls->Add(this->butterchiken);
			this->panel9->Location = System::Drawing::Point(419, 297);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(85, 49);
			this->panel9->TabIndex = 67;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label15->Location = System::Drawing::Point(3, 21);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 25);
			this->label15->TabIndex = 72;
			this->label15->Text = L"Chicken";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::MintCream;
			this->panel8->Controls->Add(this->dhokla);
			this->panel8->Location = System::Drawing::Point(419, 216);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(85, 49);
			this->panel8->TabIndex = 66;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::MintCream;
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->idlli);
			this->panel7->Location = System::Drawing::Point(419, 133);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(85, 49);
			this->panel7->TabIndex = 65;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(5, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Sambar";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// idlli
			// 
			this->idlli->AutoSize = true;
			this->idlli->BackColor = System::Drawing::Color::Transparent;
			this->idlli->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->idlli->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->idlli->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->idlli->Location = System::Drawing::Point(19, 2);
			this->idlli->Name = L"idlli";
			this->idlli->Size = System::Drawing::Size(43, 25);
			this->idlli->TabIndex = 21;
			this->idlli->Text = L"Idli";
			this->idlli->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->idlli->Click += gcnew System::EventHandler(this, &MyForm::labelHotdog_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::MintCream;
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->vadapav);
			this->panel6->Location = System::Drawing::Point(419, 54);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(85, 49);
			this->panel6->TabIndex = 64;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(20, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 25);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Pav";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// vadapav
			// 
			this->vadapav->AutoSize = true;
			this->vadapav->BackColor = System::Drawing::Color::Transparent;
			this->vadapav->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->vadapav->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->vadapav->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->vadapav->Location = System::Drawing::Point(14, 2);
			this->vadapav->Name = L"vadapav";
			this->vadapav->Size = System::Drawing::Size(56, 25);
			this->vadapav->TabIndex = 6;
			this->vadapav->Text = L"Vada";
			this->vadapav->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->vadapav->Click += gcnew System::EventHandler(this, &MyForm::labelBurger_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::MintCream;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->cholebhatura);
			this->panel5->Location = System::Drawing::Point(128, 296);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(85, 49);
			this->panel5->TabIndex = 63;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(2, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 25);
			this->label7->TabIndex = 64;
			this->label7->Text = L"Bhature";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MintCream;
			this->panel4->Controls->Add(this->pizza);
			this->panel4->Location = System::Drawing::Point(128, 216);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(85, 49);
			this->panel4->TabIndex = 62;
			// 
			// pizza
			// 
			this->pizza->AutoSize = true;
			this->pizza->BackColor = System::Drawing::Color::Transparent;
			this->pizza->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pizza->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->pizza->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pizza->Location = System::Drawing::Point(12, 11);
			this->pizza->Name = L"pizza";
			this->pizza->Size = System::Drawing::Size(61, 25);
			this->pizza->TabIndex = 31;
			this->pizza->Text = L"Pizza";
			this->pizza->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pizza->Click += gcnew System::EventHandler(this, &MyForm::labelPopcorn_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MintCream;
			this->panel3->Controls->Add(this->poha);
			this->panel3->Location = System::Drawing::Point(128, 133);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(85, 49);
			this->panel3->TabIndex = 61;
			// 
			// poha
			// 
			this->poha->AutoSize = true;
			this->poha->BackColor = System::Drawing::Color::Transparent;
			this->poha->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->poha->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->poha->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->poha->Location = System::Drawing::Point(15, 12);
			this->poha->Name = L"poha";
			this->poha->Size = System::Drawing::Size(54, 25);
			this->poha->TabIndex = 16;
			this->poha->Text = L"Poha";
			this->poha->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->poha->Click += gcnew System::EventHandler(this, &MyForm::labelFfries_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MintCream;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->Misalpav);
			this->panel2->Location = System::Drawing::Point(128, 54);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(85, 49);
			this->panel2->TabIndex = 60;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Pav";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// Misalpav
			// 
			this->Misalpav->AutoSize = true;
			this->Misalpav->BackColor = System::Drawing::Color::Transparent;
			this->Misalpav->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Misalpav->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->Misalpav->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Misalpav->Location = System::Drawing::Point(11, 2);
			this->Misalpav->Name = L"Misalpav";
			this->Misalpav->Size = System::Drawing::Size(61, 25);
			this->Misalpav->TabIndex = 1;
			this->Misalpav->Text = L"Misal";
			this->Misalpav->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Misalpav->Click += gcnew System::EventHandler(this, &MyForm::labelPizza_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox9->Location = System::Drawing::Point(26, 203);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(96, 71);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 30;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox4->Location = System::Drawing::Point(312, 285);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 71);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox5->Location = System::Drawing::Point(312, 122);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(96, 71);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// t4
			// 
			this->t4->AllowDrop = true;
			this->t4->BackColor = System::Drawing::SystemColors::Window;
			this->t4->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->t4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t4->Location = System::Drawing::Point(219, 144);
			this->t4->MaxLength = 1;
			this->t4->Name = L"t4";
			this->t4->Size = System::Drawing::Size(44, 29);
			this->t4->TabIndex = 17;
			this->t4->Tag = L"";
			this->t4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t4->TextChanged += gcnew System::EventHandler(this, &MyForm::t4_TextChanged);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox6->Location = System::Drawing::Point(26, 122);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(96, 71);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold));
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(781, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 18);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Quantity";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold));
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(639, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 18);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Choose Meal";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox3->Location = System::Drawing::Point(312, 203);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(96, 71);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold));
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(497, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Quantity";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold));
			this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label6->Location = System::Drawing::Point(343, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 18);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Choose Meal";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox2->Location = System::Drawing::Point(314, 42);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 71);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold));
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(199, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Quantity";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// t1
			// 
			this->t1->BackColor = System::Drawing::SystemColors::Window;
			this->t1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->t1->Location = System::Drawing::Point(219, 64);
			this->t1->MaxLength = 1;
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(44, 32);
			this->t1->TabIndex = 2;
			this->t1->Tag = L"";
			this->t1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->t1->TextChanged += gcnew System::EventHandler(this, &MyForm::t1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold));
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(53, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Choose Meal";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pictureBox1->Location = System::Drawing::Point(26, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Algerian", 21.75F));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(245, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(343, 34);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Food Ordering System";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::Color::Red;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LogoutButton->Location = System::Drawing::Point(948, 16);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->Size = System::Drawing::Size(75, 32);
			this->LogoutButton->TabIndex = 11;
			this->LogoutButton->Text = L"DNTI";
			this->LogoutButton->UseVisualStyleBackColor = false;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &MyForm::LogoutButton_Click);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->BackColor = System::Drawing::Color::Transparent;
			this->lblUsername->Location = System::Drawing::Point(838, 23);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(58, 13);
			this->lblUsername->TabIndex = 12;
			this->lblUsername->Text = L"Username:";
			// 
			// lblLoginTime
			// 
			this->lblLoginTime->AutoSize = true;
			this->lblLoginTime->BackColor = System::Drawing::Color::Transparent;
			this->lblLoginTime->Location = System::Drawing::Point(838, 3);
			this->lblLoginTime->Name = L"lblLoginTime";
			this->lblLoginTime->Size = System::Drawing::Size(62, 13);
			this->lblLoginTime->TabIndex = 13;
			this->lblLoginTime->Text = L"Login Time:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1027, 577);
			this->Controls->Add(this->lblLoginTime);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->LogoutButton);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PPSU ---- Food Odering System Office ---Mini Project";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelPancake_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelPopcorn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelFfries_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelPizza_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelBurger_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelSandwich_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelHotdog_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelChips_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelSausage_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void placeOrder_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LogoutButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void t1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t2_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t3_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t4_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t5_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t6_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t7_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t8_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t9_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t10_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t11_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void t12_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void ValidateTextBox(System::Windows::Forms::TextBox^ textBox);
private: String^ loggedInUsername;
public: void SetUserInfo(String^ username, DateTime loginTime);
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
public: int CountNonEmptyTextBoxes();
};
}
