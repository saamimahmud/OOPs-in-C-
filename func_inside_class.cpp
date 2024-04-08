//creating a member function inside a class
#include<iostream>
using namespace std;
class Animals{
    char name[20];
    int num_of_legs;
    char species[20];
public:
void get(){
    
    cout<<"Enter the name of species "<<species<<" :\n";
    cin>>name; 
    cout<<"Enter the number of legs\n";
    cin>>num_of_legs;

}
void display(){
    cout<<"\nName of animal: "<<name;
    cout<<"\nnumber of legs of "<<name<<": "<<num_of_legs;
    
}
};
int main(){
    Animals A1,A2;
    A1.get();
    A2.get();
    A1.display();
    A2.display();
    return 0 ;
    
}
