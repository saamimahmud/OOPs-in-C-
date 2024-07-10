#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class add_name{
    string name="saami";
    public:
    add_name() {}
    add_name(string one){
        name=one;
    }
    void get(){
        cout<<"enter name : "<<endl;
        cin>>name;
    }
    void show(){
        cout<<name;

    }
    add_name operator +(add_name firstname){
        add_name fullname;
        fullname.name=firstname.name+name;
        return fullname;

    }
    int main(){
        add_name firstname("Mahmud");
        
        add_name Full_name=firstname + name;
        Full_name.show();
        return 0;

    }


};

