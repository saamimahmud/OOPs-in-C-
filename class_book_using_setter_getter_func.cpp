#include<iostream>
#include<string>
using namespace std;
class Book{
    int pages;
    float price;
    string name;
    public:
    void get(int,float);
    void disp();
    void set_name(string n){
        name=n;
    }
};
void Book::get(int p,float pr){
    pages=p;
    price=pr;
    
}
void Book::disp(){
    cout<<"The name of the book is : "<<name<<endl;
    cout<<"The Book "<<name<<" has "<<pages<<" pages."<<endl;
    cout<<"Price of the Book is : "<<price<<endl;
}
int main(){
    Book b1;
    b1.set_name("Python Programming");
    b1.get(800,249.6);
    b1.disp();
    return 0;
}