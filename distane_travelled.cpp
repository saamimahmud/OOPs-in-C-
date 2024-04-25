#include<iostream>
using namespace std;
class Distance{
    int km,hr;
    public:
    Distance(): km(0),hr(0){}
    void get(){
        cout<<"********Input Travel Details********"<<endl;
        cout<<"Enter distance travelled in kilometers : "<<endl;
        cin>>km;
        cout<<"Enter time taken to travel "<<km<<" kilometers : "<<endl;
        cin>>hr;
    }
    void disp(){
        cout<<"********TRAVEL DETAILS********"<<endl;
        cout<<"You have travelled "<<km<<" Kilometers in "<<hr<<" Hours"<<endl;
        

    }

};
int main(){
    Distance d1,d2;
    d1.get();
    d1.disp();
    return 0;
}