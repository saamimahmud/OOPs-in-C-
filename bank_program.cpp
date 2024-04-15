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
        
        balance=balance+amount;
        cout<<"Balance after deposit : "<<balance<<endl;
    }
    void withdraw(int amount){
        cout<<"Balance before withdrawing : "<<balance<<endl;
        
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
    int amount,choice;
    
    
    do{
        cout<<"---(^^^^^^^^)_MAIN MENU_(^^^^^^^^)---"<<endl;
        cout<<"\t***SERVICES***\t "<<endl;
        cout<<"(1)Deposit Money"<<endl;
        cout<<"(2)Withdraw Money"<<endl;
        cout<<"(3)Display Account Details Money"<<endl;
        cout<<"(4)QUIT"<<endl;
        cout<<"Enter desired number to choose service of your choice : "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the amount of money to be deposited in the bank account : "<<endl;
                cin>>amount;
                b1.deposit(amount);
                break;

            case 2:
                cout<<"Enter the amount of money to be withdrawn from the bank account : "<<endl;
                cin>>amount;
                b1.withdraw(amount);
                break;
            case 3: 
                b1.disp();
                break;
            case 4:
                exit(0);
                break;    
        }
    }while(1);
    return 0;
}