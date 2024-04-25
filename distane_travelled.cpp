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
    void total(Distance tot){
        Distance t;
        t.km=km+tot.km;
        t.hr=hr+tot.hr;
        cout<<"Total Distance traveled is "<<t.km<<" Kilometers" <<" in "<<t.hr<<" Hours";
    }

};
int main(){
    Distance d1,d2;
    cout<<"TRAVEL DETAILS OF DAY 1 ";
    
    d1.get();
    d1.disp();
    cout<<"TRAVEL DETAILS OF DAY 2 ";
    d2.get();
    d2.disp();
    d1.total(d2);
    return 0;
}