#include<iostream>
using namespace std;
int fib(int a){
    //base condtion
  if(a==0){
    return 0;
  }
  if(a==1){
    return 1;
    //last function asnar tela retrun denar 
  }
  int ans=fib(a-1)+fib(a-2);

    
}
int main(){
    int a=3;
   cout<< fib(a);
}