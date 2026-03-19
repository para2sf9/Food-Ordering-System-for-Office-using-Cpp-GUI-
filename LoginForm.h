#pragma once

namespace miniproject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::OleDb;

    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        String^ Username;

    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    public:

    public:
        DateTime LoginTime;
        LoginForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~LoginForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ txtUsername;
    private: System::Windows::Forms::TextBox^ txtPassword;
    private: System::Windows::Forms::Button^ btnLogin;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;


    private:
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
            this->txtUsername = (gcnew System::Windows::Forms::TextBox());
            this->txtPassword = (gcnew System::Windows::Forms::TextBox());
            this->btnLogin = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
            // 
            // txtUsername
            // 
            this->txtUsername->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtUsername->Location = System::Drawing::Point(266, 67);
            this->txtUsername->Name = L"txtUsername";
            this->txtUsername->Size = System::Drawing::Size(200, 26);
            this->txtUsername->TabIndex = 0;
            // 
            // txtPassword
            // 
            this->txtPassword->Font = (gcnew System::Drawing::Font(L"Cambria", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtPassword->Location = System::Drawing::Point(266, 145);
            this->txtPassword->Name = L"txtPassword";
            this->txtPassword->Size = System::Drawing::Size(200, 25);
            this->txtPassword->TabIndex = 1;
            this->txtPassword->UseSystemPasswordChar = true;
            // 
            // btnLogin
            // 
            this->btnLogin->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->btnLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnLogin->Location = System::Drawing::Point(218, 210);
            this->btnLogin->Name = L"btnLogin";
            this->btnLogin->Size = System::Drawing::Size(100, 30);
            this->btnLogin->TabIndex = 2;
            this->btnLogin->Text = L"Login";
            this->btnLogin->UseVisualStyleBackColor = false;
            this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(152, 69);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(88, 21);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Username";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(152, 146);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(84, 21);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Password";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(345, 208);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(148, 86);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 6;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(107, 235);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(118, 55);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(272, 187);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(59, 53);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 8;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(218, 235);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(135, 59);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 9;
            this->pictureBox4->TabStop = false;
            // 
            // LoginForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(505, 293);
            this->Controls->Add(this->btnLogin);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->txtPassword);
            this->Controls->Add(this->txtUsername);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox4);
            this->DoubleBuffered = true;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"LoginForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Login";
            this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        void btnLogin_Click(System::Object^ sender, System::EventArgs^ e)
        {
            String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Paras Chavan\\Videos\\Miniprojectsem4\\Project\\miniproject\\db.accdb";
            OleDbConnection^ conn = gcnew OleDbConnection(connString);
            try
            {
                conn->Open();

                // Retrieve LastLoginDate for the user
                String^ checkUserQuery = "SELECT LastLoginDate FROM tb1 WHERE UserName = ? AND [Password] = ?";
                OleDbCommand^ checkUserCmd = gcnew OleDbCommand(checkUserQuery, conn);
                checkUserCmd->Parameters->AddWithValue("@UserName", txtUsername->Text->Trim());
                checkUserCmd->Parameters->AddWithValue("@Password", txtPassword->Text->Trim());

                OleDbDataReader^ reader = checkUserCmd->ExecuteReader();

                if (reader->Read())
                {
                    DateTime lastLoginDate;

                    if (!reader->IsDBNull(0))
                        lastLoginDate = reader->GetDateTime(0);
                    else
                        lastLoginDate = DateTime::MinValue; // Handle NULL as never logged in

                    // Check if last login was today
                    if (lastLoginDate.Date == DateTime::Now.Date)
                    {
                        MessageBox::Show("You have already logged in today. Please try again tomorrow.");
                        reader->Close();
                        return;
                    }
                    else
                    {
                        reader->Close(); // Close reader before executing update

                        // Update LastLoginDate to today
                        String^ updateQuery = "UPDATE tb1 SET LastLoginDate = ? WHERE UserName = ?";
                        OleDbCommand^ updateCmd = gcnew OleDbCommand(updateQuery, conn);
                        updateCmd->Parameters->AddWithValue("@LastLoginDate", DateTime::Now.Date);
                        updateCmd->Parameters->AddWithValue("@UserName", txtUsername->Text->Trim());
                        updateCmd->ExecuteNonQuery();

                        // Proceed with login
                        this->Username = txtUsername->Text;
                        this->LoginTime = DateTime::Now;
                        MessageBox::Show("Login successful! Place Your Order");
                        this->DialogResult = System::Windows::Forms::DialogResult::OK;
                        this->Close();
                    }
                }
                else
                {
                    MessageBox::Show("Invalid username or password.");
                }
                reader->Close();
            }
            catch (OleDbException^ ex)
            {
                MessageBox::Show("Database Error: " + ex->Message);
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message);
            }
            finally
            {
                if (conn->State == ConnectionState::Open)
                    conn->Close();
            }
        }
    private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
