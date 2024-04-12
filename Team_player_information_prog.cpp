#include<iostream>
#include<string>
#include<cstdlib>
#include<string.h>
using namespace std;
class Player{
    int age;
    char team[30];
    char name[30];
    public:
    Player(){
        cout<<"Enter the age of player : "<<endl;
        cin>>age;
        cout<<"Enter the name of Team : "<<endl;
        cin>>team;
        cout<<"Enter the name of the player : "<<endl;
        cin>>name;  
    }
    void display(){
        cout<<"The name of the player is : "<<name<<endl;
        cout<<"The age of the player is : "<<age<<endl;
        cout<<"The name of the team is : "<<team<<endl;
    }
    void change(const char n[40],const char t[40],int a){
        strcpy(name,n);
        strcpy(team,t);
        age=a;
    }
    void input(){
        cout<<"Name of the player : "<<endl;
        cin>>name;
        cout<<"Age of the playe : "<<endl;
        cin>>age;
        cout<<"Team Name of the player : "<<endl;
        cin>>team;
    }
    
};
int main(){
    Player p1;
    p1.display();
    int choice;
    do{
        cout<<"********MAIN MENU********"<<endl;
        cout<<"1:- Take information of player "<<endl;
        cout<<"2:- Display the information of player "<<endl;
        cout<<"3:- change the information"<<endl;
        cout<<"4:- EXIT "<<endl;
        cout<<"Enter the number to take action : "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                p1.input();
                break;
            case 2:
                p1.display();
                break;
            case 3:
                p1.change("Saami","barcelona",22);
                break;
            case 4:
            exit(0);
                break;
            default:
                cout<<"please enter number fromm the following (1,2,3,4) "<<endl;
                        }
     } while(1);
     return 0;
}

    
