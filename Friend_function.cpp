#include<iostream>
using namespace std;
class Father;
class Mother{
    char name[15];
    int income;
public:
    void get_data(void);
    friend int total(Father F,Mother M);

};
class Father{
    char name[15];
    int income;
public:
    void get_data(void);
    friend int total(Father F,Mother M);
};
void Mother::get_data(void){
    cout<<"Enter Mother's name : "<<endl;
    cin>>name;
    cout<<"Enter the income of the Mother : "<<endl;
    cin>>income;
}
void Father::get_data(void){
    cout<<"Enter Father's name : "<<endl;
    cin>>name;
    cout<<"Enter the income of the Father : "<<endl;
    cin>>income;
}
int total(Father F,Mother M){
    int total;
    total=F.income+M.income;
    return total;
}
int main(){
    Mother m;
    Father f;
    m.get_data();
    f.get_data();
    int total_income;
    total_income= total(f,m);
    cout<<"The total income of the parents : "<<total_income<<endl;
    return 0;   
}