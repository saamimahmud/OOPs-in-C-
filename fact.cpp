#include<iostream>
using namespace std;
class Factorial{
    public:
    int func(int fact) {
        if (fact == 0 || fact == 1) {
            return 1 ;
        }
        return fact * func(fact - 1);
    }
};
int main(){
    
    int p=5;
    Factorial factorial;
    cout<<"factorial = "<<factorial.func(p);
  return 0;
}