#include "MyForm.h"
#include "LoadingForm.h"
#include "LoginForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    miniproject::LoadingForm^ loadingForm = gcnew miniproject::LoadingForm();
    loadingForm->Show();
    loadingForm->UpdateProgress(0, "Initializing...");

    for (int i = 0; i <= 100; i += 20)
    {
        System::Threading::Thread::Sleep(200);
        String^ status = "Loading... " + i + "%";
        loadingForm->UpdateProgress(i, status);
    }

    loadingForm->UpdateProgress(100, "Loading complete!");
    System::Threading::Thread::Sleep(250);

    loadingForm->Close();
    miniproject::LoginForm^ loginForm = gcnew miniproject::LoginForm();
    if (loginForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        miniproject::MyForm^ form = gcnew miniproject::MyForm();
        form->SetUserInfo(loginForm->Username, loginForm->LoginTime);
        Application::Run(form);
    }

    return 0;
}

System::Void miniproject::MyForm::LogoutButton_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("This is only for Company Officials!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

System::Void miniproject::MyForm::placeOrder_Click(System::Object^ sender, System::EventArgs^ e) {
    // Check if at least one textbox is filled
    if (String::IsNullOrWhiteSpace(t1->Text) && String::IsNullOrWhiteSpace(t2->Text) &&
        String::IsNullOrWhiteSpace(t3->Text) && String::IsNullOrWhiteSpace(t4->Text) &&
        String::IsNullOrWhiteSpace(t5->Text) && String::IsNullOrWhiteSpace(t6->Text) &&
        String::IsNullOrWhiteSpace(t7->Text) && String::IsNullOrWhiteSpace(t8->Text) &&
        String::IsNullOrWhiteSpace(t9->Text) && String::IsNullOrWhiteSpace(t10->Text) &&
        String::IsNullOrWhiteSpace(t11->Text) && String::IsNullOrWhiteSpace(t12->Text)) {
        MessageBox::Show("Please fill at least one Box before placing the order.", "Order Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Initialize variables
    array<TextBox^>^ textBoxes = { t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12 };
    array<String^>^ itemNames = { "Misal Pav", "Vada Pav", "Sandwich", "Poha", "Idli Sambar",
                                   "Upma", "Pizza", "Dhokla", "Masala Dosa", "Chole Bhature",
                                   "Butter Chicken", "Paneer Bhurji" };

    // Calculate the total quantity entered by the user
    int totalQuantity = 0;
    array<int>^ quantities = gcnew array<int>(textBoxes->Length);
    for (int i = 0; i < textBoxes->Length; i++) {
        if (!String::IsNullOrWhiteSpace(textBoxes[i]->Text)) {
            int quantity = Int32::Parse(textBoxes[i]->Text);
            if (quantity != 1 && quantity != 2) {
                MessageBox::Show("Each item must have a quantity of either 1 or 2.", "Order Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            totalQuantity += quantity;
            quantities[i] = quantity;
        }
    }

    // Check if the total quantity exceeds 4
    if (totalQuantity > 4) {
        MessageBox::Show("You cannot order more than a total quantity of 4.", "Order Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Confirm order with the user
    System::Windows::Forms::DialogResult result = MessageBox::Show(
        "Are you sure that you want to place the order?",
        "Confirm Order",
        MessageBoxButtons::OKCancel,
        MessageBoxIcon::Question
    );

    if (result == System::Windows::Forms::DialogResult::OK) {
        String^ companyName = "PPSU FOSO";
        String^ userName = this->loggedInUsername; // Use the logged-in user's username
        int employeeId = 0;

        // Fetch the employee ID from the tb1 table based on the logged-in username
        String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Paras Chavan\\Videos\\Miniprojectsem4\\Project\\miniproject\\db.accdb";
        OleDbConnection^ conn = gcnew OleDbConnection(connString);

        try {
            conn->Open();
            String^ selectQuery = "SELECT ID FROM tb1 WHERE UserName = ?";
            OleDbCommand^ selectCmd = gcnew OleDbCommand(selectQuery, conn);
            selectCmd->Parameters->Add("@UserName", OleDbType::VarChar)->Value = userName;

            OleDbDataReader^ reader = selectCmd->ExecuteReader();
            if (reader->Read()) {
                employeeId = reader->GetInt32(0);
            }
            else {
                MessageBox::Show("Employee ID not found for the logged-in user.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            reader->Close();

            // Check the total quantity ordered by the employee on the current date
            String^ dateQuery = "SELECT SUM(Quantity) FROM tb2 WHERE EmployeeID = ? AND OrderDate = ?";
            OleDbCommand^ dateCmd = gcnew OleDbCommand(dateQuery, conn);
            dateCmd->Parameters->Add("@EmployeeID", OleDbType::Integer)->Value = employeeId;
            dateCmd->Parameters->Add("@OrderDate", OleDbType::Date)->Value = DateTime::Now.Date;

            int currentTotalQuantity = 0;
            Object^ resultObj = dateCmd->ExecuteScalar();
            if (resultObj != DBNull::Value) {
                currentTotalQuantity = Convert::ToInt32(resultObj);
            }

            // Check if the total quantity including the new order exceeds 4
            if (currentTotalQuantity + totalQuantity > 4) {
                MessageBox::Show("You cannot order more than a total quantity of 4 in a single day.", "Order Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Insert order into the database
            String^ insertQuery = "INSERT INTO tb2 (EmployeeID, UserName, ItemName, Quantity, OrderDate) VALUES (?, ?, ?, ?, ?)";
            OleDbCommand^ insertCmd = gcnew OleDbCommand(insertQuery, conn);

            // Loop through textboxes to insert each item
            for (int i = 0; i < textBoxes->Length; i++) {
                if (!String::IsNullOrWhiteSpace(textBoxes[i]->Text)) {
                    // Clear previous parameters
                    insertCmd->Parameters->Clear();

                    // Add parameters for each item
                    insertCmd->Parameters->Add("@EmployeeID", OleDbType::Integer)->Value = employeeId; // Re-add EmployeeID
                    insertCmd->Parameters->Add("@UserName", OleDbType::VarChar)->Value = userName; // Add UserName
                    insertCmd->Parameters->Add("@ItemName", OleDbType::VarChar)->Value = itemNames[i]; // Use descriptive item names
                    insertCmd->Parameters->Add("@Quantity", OleDbType::Integer)->Value = Int32::Parse(textBoxes[i]->Text); // Assuming quantity is entered as a number
                    insertCmd->Parameters->Add("@OrderDate", OleDbType::Date)->Value = DateTime::Now; // This should be a DateTime

                    // Execute the insert command
                    insertCmd->ExecuteNonQuery();
                }
            }

            // Display the order receipt
            String^ receipt = "Company: " + companyName + "\n\nOrder Receipt:\n";
            for (int i = 0; i < textBoxes->Length; i++) {
                if (quantities[i] > 0) {
                    receipt += itemNames[i] + ": " + quantities[i] + "\n";
                }
            }
            MessageBox::Show(receipt, "Order Receipt", MessageBoxButtons::OK, MessageBoxIcon::Information);

            // Display the order confirmation message
            MessageBox::Show("Thank You! For Ordering. \n Your order is being placed.\n Visit the cafeteria soon!", "Order Confirmation", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (OleDbException^ ex) {
            MessageBox::Show("Database Error: " + ex->Message);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message);
        }
        finally {
            if (conn->State == ConnectionState::Open)
                conn->Close();
        }

        // Clear textboxes after placing the order
        for (int i = 0; i < textBoxes->Length; i++) {
            textBoxes[i]->Text = "";
        }
    }
}



System::Void miniproject::MyForm::t1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t1);
       }

       System::Void miniproject::MyForm::t2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t2);
       }

       System::Void miniproject::MyForm::t3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t3);
       }

       System::Void miniproject::MyForm::t4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t4);
       }

       System::Void miniproject::MyForm::t5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t5);
       }

       System::Void miniproject::MyForm::t6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t6);
       }

       System::Void miniproject::MyForm::t7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t7);
       }

       System::Void miniproject::MyForm::t8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t8);
       }

       System::Void miniproject::MyForm::t9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t9);
       }

       System::Void miniproject::MyForm::t10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t10);
       }

       System::Void miniproject::MyForm::t11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t11);
       }

       System::Void miniproject::MyForm::t12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
           ValidateTextBox(t12);
       }

       System::Void miniproject::MyForm::ValidateTextBox(TextBox^ textBox) {
           if (clearingTextboxes) return;
           String^ text = textBox->Text;
           int nonEmptyCount = CountNonEmptyTextBoxes();
           if (nonEmptyCount > 2 && !String::IsNullOrWhiteSpace(text)) {
               MessageBox::Show("You can only order 2 items for a day.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               clearingTextboxes = true;
               textBox->Text = "";
               clearingTextboxes = false;
           }
           else if (!String::IsNullOrWhiteSpace(text) && text != "1" && text != "2") {
               MessageBox::Show("Please enter a number (1 or 2).", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               clearingTextboxes = true;
               textBox->Text = "";
               clearingTextboxes = false;
           }
       }

       int miniproject::MyForm::CountNonEmptyTextBoxes() {
           int count = 0;
           if (!String::IsNullOrWhiteSpace(t1->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t2->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t3->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t4->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t5->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t6->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t7->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t8->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t9->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t10->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t11->Text)) count++;
           if (!String::IsNullOrWhiteSpace(t12->Text)) count++;
           return count;
       }

       void miniproject::MyForm::SetUserInfo(String^ username, DateTime loginTime)
       {
           this->loggedInUsername = username; // Store the username
           this->lblUsername->Text = "Username: " + username;
           this->lblLoginTime->Text = "Login Time: " + loginTime.ToString();
       }

       System::Void miniproject::MyForm::MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
           System::Windows::Forms::DialogResult result = MessageBox::Show(
               "Are you sure you want to close the application?",
               "Confirm Exit",
               MessageBoxButtons::OKCancel,
               MessageBoxIcon::Question
           );

           if (result == System::Windows::Forms::DialogResult::Cancel) {
               e->Cancel = true;
           }
       }