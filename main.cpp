
#include <iostream>
using namespace std;

int main(){
    
string name;
double choice;
double totalmoney = 0;
double money;
double withmoney;
int x=0;
int yn;
double bill;
int pay = 0;
int totalBill = 10000;
int owemoney;
cout << "Welcome to Kaan Bank; I see that you are new here. Please enter your name to use Kaan Bank services: ";
getline(cin,name);

    x=3;

cout << "" <<endl;
    
do {
        
        cout << "Hello " << name << "! What would you like to do today? Please enter the following number that corresponds to your needs:  " << endl;
        cout <<"1) Add money to your account" << endl;
        cout <<"2) Withdraw from your account" << endl;
        cout <<"3) Pay a bill" << endl;
        cout <<"4) View my balance " << endl;
    cout << "5) Exit" <<endl;
        cout << "";
        cin >> choice;
        
if (choice == 1) {
    cout << "" <<endl;
            cout << "Please enter the amount you will like to add to your account: ";
            cin >> money;
    cout << "" <<endl;
            totalmoney = money + totalmoney;
    cout << "" <<endl;
            cout << "You now have $" << totalmoney << " in your account." << endl;

    
        }
if (choice == 2) {
    cout << "" <<endl;
            cout << "Please enter the amount you will like to withdraw to your account: ";
            cin >> withmoney;
    cout << "" <<endl;
            totalmoney = totalmoney - withmoney;
    cout << "" <<endl;
            cout << "You now have $" << totalmoney << " left in your account." <<endl;
        }
        
if (choice == 3) {
    cout << "" <<endl;
    cout << "You have a total of $" << totalBill << " to pay to Kaan Bank";
    cout << "" <<endl;
    
    cout << "Please enter the amount of money you will be paying today: ";
    cin >> pay;
            
    totalBill = totalBill - pay;
  

    cout << "Confirm the payment of $" << pay << "? " << "? Please enter 1) yes or 2) No" << endl;
    cin >> yn;
            
       if (yn == 1) {
            cout << "Ok. You now owe $" << totalBill << endl;
                  }
        else if (yn == 1 && totalBill == 0) {
            cout << "Ok. Your new balance is ... Wait. You paid off your bill,Congrats!!! " << endl;
                  }
                  
        else if (yn == 2 ) {
            cout << "No worries! I will cancel the payment." << endl;
                  }
                  
            
    }
    
    if (choice == 4) {
        cout << "" <<endl;
        cout << "You have $" << totalmoney << " in your account." <<endl;
        cout << "" <<endl;
    }
    
    if (choice == 5) {
        cout << "Goodbye. Thank you for using Kaan Bank, " << name << "!" << endl;
        x=5;
    }
    
    }
    
   while(x==3);
    
    }

