#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 0.0;
    double depositAmount;
    double withdrawAmount;
    
    cout<<"\nDEPOSIT MONEY FIRST TO YOUR CURRRENT ACCOUNT BALANCE:";
    cin>>balance;
    cout<<"Your current balance is:"<<balance<<endl;
    do {
        
        cout << "Banking System Menu" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

       
        switch (choice) {
            case 1:
                
                cout << "Current balance: " << balance << endl;
                break;

            case 2:
               
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                if (depositAmount > 0) {
                    balance += depositAmount;
                    cout << "Deposited" << depositAmount << ". New balance: " << balance << endl;
                } else {
                    cout << "Deposit amount must be positive." << endl;
                }
                break;

            case 3:
                
                cout << "Enter withdrawal amount: ";
                cin >> withdrawAmount;
                if (withdrawAmount > 0){
                    if (withdrawAmount <= balance) {
                        balance -= withdrawAmount;
                        cout << "Withdraw: " << withdrawAmount << " New balance: " << balance << endl;
                    } else {
                            cout << "Insufficient funds." << endl;
                        }
                } else {
                    cout << "Withdrawal amount must be positive." << endl;
                }
                break;

            case 4:
                
                cout << "THANKS MAN" << endl;
                break;

        
        }

        cout << endl;  



    } while (choice != 4);  

    return 0;
}
