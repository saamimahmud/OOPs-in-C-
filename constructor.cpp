#include<iostream>
using namespace std;
class Test{
    int n;
    public:
    Test(){
        cout<<"--constructor--"<<endl;
    }
};
int main(){
    Test t1,t2;
    return 0;
}