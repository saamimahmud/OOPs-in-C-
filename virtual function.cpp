#include<iostream>
#include<string>
using namespace std;
// operator overloading;
class base{
    int x;
    public:
    void show(){
        cout<<"show function of base class called."<<endl;
    }
 virtual   void disp(){
        cout<<"disp function of base class called"<<endl;
    }
};
class derived : public base{
    public:
       void show(){
        cout<<"show function of derived class called."<<endl;
    }
    void disp(){
        cout<<"disp function of derived class called"<<endl;
    }
};
int main(){
      derived d;
    base *baseptr;
    baseptr=&d;
    
   baseptr-> show();
   baseptr-> disp();
  
   
    
    return 0;
}