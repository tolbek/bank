#include <iostream>

using namespace std;

// Variable
int balance;
int depositAmount;

// Const
const char *contactNumber = "1234";

void welcomeMessage() {
    cout<<"Welcome to our bank, choose an option"<<"\n";
}

void menuOptionsDisplay() {
    cout<<"Enter a number corresponding to your preferred option"<<"\n";
    cout<<"1) Receive Funds>"<<"\n"<<"2) Safe Keeping"<<"\n"<<"3) Donate"<<"\n";
}

int getChoice() {
    int choice;
    cin>>choice;

    if(choice < 1 || choice > 3) {
        cout<<"Enter a valid number";
        int chooseAgain;
        cin>>chooseAgain;
        if(chooseAgain < 1 || chooseAgain > 3) {
            cout<<"Program restart"<<"\n";
        } else {
            return chooseAgain;
        }
    }

    return choice;
}

string createUser() {
    cout<<"Enter a user name for your operations, which will be remembered for further visits"<<"\n";
    string userName;
    cin>>userName;

    if(userName.length() < 1 || userName.length() > 25) {
        cout<<"At least two characters, at most twenty five characters"<<"\n";
        string userNameCheck;
        cin>>userNameCheck;

        if(userNameCheck.length() < 1 || userNameCheck.length() > 25) {
            cout<<"Program restart"<<"\n";
        }

        userName = userNameCheck;
    }
    return userName;
}

void displayFunds() {
    cout<<"Current balance is "<<balance<<"\n";
}

int safeKeeping() {
    cout<<"Enter deposit amount"<<depositAmount<<"\n";
    cin>>depositAmount;
    cout<<depositAmount<<" will be added to your funds"<<"\n";
    balance += depositAmount;
    cout<<"Current balance "<<balance;

    return balance;
}

int donationProcess() {
    cout<<"donations are appreciated"<<"\n";
    int donationAmount;
    cin>>donationAmount;
}

void closeProgram() {
    cout<<"Thank you for using our services"<<"\n";
    cout<<"You can reach us at "<< contactNumber<<"\n";
}



int main() {
  welcomeMessage();
  menuOptionsDisplay();
  getChoice();

  createUser();

  displayFunds();
  safeKeeping();
  donationProcess();

  closeProgram();

  return 0;
}
