//creating a class and its object
#include<iostream>
using namespace std;
class Student{
    char name[20];
    int age;
    public :
    void get(){
        cout<<"Enter the name of the student :";
        cin>>name;
        cout<<"Enter the age :";
        cin>>age;
    }
    void display(){
        cout<<"Name : "<<name<<"\n";
        cout<<"Age : "<<age;
    }

};
int main()
{
    Student S1;
    S1.get();
    S1.display();
return 0;
}