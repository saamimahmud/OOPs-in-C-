#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    void disp(int);
};
void Student::disp(int rollno)
{
    cout<<"The Roll number of the student is : "<<rollno;
}
int main(){
    Student S1;
    S1.disp(37);
    return 0;
}