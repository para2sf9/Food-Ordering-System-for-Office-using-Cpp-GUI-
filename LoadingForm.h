#pragma once

namespace miniproject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class LoadingForm : public System::Windows::Forms::Form
    {
    public:
        LoadingForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~LoadingForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::ProgressBar^ progressBar;
    private: System::Windows::Forms::Label^ statusLabel;





    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoadingForm::typeid));
               this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
               this->statusLabel = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // progressBar
               // 
               this->progressBar->Location = System::Drawing::Point(0, 360);
               this->progressBar->Name = L"progressBar";
               this->progressBar->Size = System::Drawing::Size(607, 23);
               this->progressBar->TabIndex = 0;
               this->progressBar->Click += gcnew System::EventHandler(this, &LoadingForm::progressBar_Click);
               // 
               // statusLabel
               // 
               this->statusLabel->AutoSize = true;
               this->statusLabel->BackColor = System::Drawing::Color::Transparent;
               this->statusLabel->ForeColor = System::Drawing::Color::White;
               this->statusLabel->Location = System::Drawing::Point(3, 344);
               this->statusLabel->Name = L"statusLabel";
               this->statusLabel->Size = System::Drawing::Size(54, 13);
               this->statusLabel->TabIndex = 1;
               this->statusLabel->Text = L"Loading...";
               // 
               // LoadingForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->ClientSize = System::Drawing::Size(606, 365);
               this->Controls->Add(this->statusLabel);
               this->Controls->Add(this->progressBar);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
               this->Name = L"LoadingForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"Loading";
               this->Load += gcnew System::EventHandler(this, &LoadingForm::LoadingForm_Load);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    public:
        void UpdateProgress(int progress, String^ status)
        {
            this->progressBar->Value = progress;
            this->statusLabel->Text = status;
            this->progressBar->Refresh();
            this->statusLabel->Refresh();
        }
    private: System::Void LoadingForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void progressBar_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
