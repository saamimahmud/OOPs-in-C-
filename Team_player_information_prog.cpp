#include<iostream>
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
    void change(){
        cout<<"Name : "<<endl;
        cin>>name;
        cout<<"Age : "<<endl;
        cin>>age;
        cout<<"Team Name : "<<endl;
        cin>>team;}
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

    return 0;

    
}