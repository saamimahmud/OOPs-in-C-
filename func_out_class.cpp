//creating a member function outside a class
#include<iostream>
using namespace std;
class Animals{
    char name[20];
    int num_of_legs;
    
public:
void get();
void disp();
};
void Animals::get(){
    cout<<"\nEnter name of animal : \n";
    cin>>name;
    cout<<"Enter number of legs : ";
    cin>>num_of_legs;
}
void Animals::disp(){
    cout<<"\nAnimal Name : "<<name;
    cout<<"\nnumber of legs of "<<name<<" : "<<num_of_legs;

}

int main(){
    Animals A1,A2;
    A1.get();
    A2.get();
    A1.disp();
    A2.disp();
    return 0 ;
    
}
