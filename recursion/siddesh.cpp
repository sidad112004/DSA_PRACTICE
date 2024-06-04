#include<iostream>
using namespace std;
class siddesh
{
    char name;
    int id;
public:void getdata()
{
    cout<<"enter name and is";
    cin>>name>>id;
};
public:void display()
{
    cout<<name<<id;
};
}; 
int main()
{
    siddesh s1;
    s1.getdata();
    s1.display();
}