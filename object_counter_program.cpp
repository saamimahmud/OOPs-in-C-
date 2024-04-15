// A program that counts the number of objects that get created of a class
#include<iostream>
using namespace std;
class Counter{
    static int count;

   public :
        Counter(){
            count=count+1;
            num_of_objs();
        }
    void num_of_objs(){
        cout<<"Total number of objects : "<<count<<endl;
    }

};
 int Counter:: count=0;
int main(){
    Counter c1,c2,c3;
    return 0;
}