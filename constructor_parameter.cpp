#include<iostream>
using namespace std;
class tester{
    int n;
    int m;
    public:
    tester(){}
    tester():n(20),m(10){}
    void disp();
};
void tester::disp(){
    cout<<"The value of n = "<<n<<endl;
    cout<<"The value of m = "<<m<<endl;
}
int main(){
    tester t1,t2;
    t1.disp();
    t2.disp();
}

