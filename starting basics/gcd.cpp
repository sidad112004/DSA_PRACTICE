#include<iostream>
using namespace std;
int fun(int a,int b){
    while(a!=b){
        if(a==0)
        return b;
        if(b==0)
        return a;
        if(a<b)
        b=b-a;

        else
        a=a-b;
    }
    return a;
}
int main(){
    int a,b;
    printf("enter the values :\n ");
    cin>>a>>b;
   int k= fun(a,b);
  cout<<"common divisor of the given number  is :"<<k<<endl;
}