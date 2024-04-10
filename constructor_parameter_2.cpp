#include<iostream>
using namespace std;
class test{
    int x,y;
    public:
    test(){}
    test(int m,int n){
        x=m;
        y=n;
    }
    void disp(){
        cout<<"value of x is "<<x<<" and value of y is "<<y<<endl;
    }
};
int main (){
    test t1(10,20);
    t1.disp();
    return 0;
}