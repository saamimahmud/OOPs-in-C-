// A program that counts the number of objects that get created of a class
#include<iostream>
using namespace std;
class Counter{
    static int count;

   public :
        Counter(){
            count=count+1;
           // num_of_objs(); (this line makes the statement get printed as many times as the number of objects)
        }
    void num_of_objs(){
        cout<<"Total number of objects : "<<count<<endl;
    }

};
 int Counter:: count=0;
int main(){
    Counter c1,c2,c3,c4,c5;
    c1.num_of_objs(); //So the statement getting printed many times is resolved by calling the  num_of_objs() function with any object.
    return 0;
}