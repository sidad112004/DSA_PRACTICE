#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){ 
        return 1;
    }
    if(n==0){
          return 0;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"enter the number :- ";
    cin>>n;
    cout<<fibo(n);

}