#include<iostream>
using namespace std;
class Bank{
    char account_name[40],acc_type[40];
    int balance,acc_num;

    public:
    Bank(){
        cout<<"(.....)*****Enter account details*****(.....)"<<endl;
        cout<<"Enter your account name : "<<endl;
        cin>>account_name;
        cout<<"Enter your account number : "<<endl;
        cin>>acc_num;
        cout<<"Enter your account type : "<<endl;
        cin>>acc_type;
        cout<<"Enter your account Balance : "<<endl;
        cin>>balance;

    }
    void deposit(int amount){
        cout<<"Balance before deposit : "<<balance<<endl;
        cout<<"Enter the amount of money to be deposited in the bank account : "<<endl;
        cin>>amount;
        balance=balance+amount;
        cout<<"Balance after deposit : "<<balance<<endl;
    }
    void withdraw(int amount){
        cout<<"Balance before withdrawing : "<<balance<<endl;
        cout<<"Enter the amount of money to be withdrawn from the bank account : "<<endl;
        cin>>amount;
        if (amount>balance){
        cout<<"Not enough money in account"<<endl;
        }
        else{
            balance=balance-amount;
            cout<<"Balance after withdrawing : "<<balance<<endl;

        }
    }
    void disp(){
        cout<<"*****-----ACCOUNT DETAILS-----*****"<<endl;
        cout<<"Account Name : "<<account_name<<endl;
        cout<<"Account Type : "<<acc_type<<endl;
        cout<<"Account Number : "<<acc_num<<endl;
        cout<<"Balance : "<<balance<<endl;
    
    }

};
int main(){
    Bank b1;
    int amount;
    b1.deposit(amount);
    b1.withdraw(amount);
    b1.disp();
    return 0;
}