#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    void disp(int,string);
};
void Student::disp(int rollno, string name)
{
    cout<<"The Roll number of the student is : "<<rollno<<endl;
    cout<<"The Name of the student is : "<<name;
}
int main(){
    Student S1;
    S1.disp(37,"Saami");
    return 0;
}