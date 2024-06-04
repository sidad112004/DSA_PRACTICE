#include<iostream>
using namespace std;
int main(){
int x,y,k;
         int i;
         cin>>x>>y>>k;
         while(k--){
             //gcd
             int a=x;
             int b=y;
             while(1){
                 if(a==b){
                     break;
                 }
                 else if(a>b){
                     a=a-b;
                 }
                 else{
                     b=a-b;
                 }
             } 
             
             for( i=2;i<(x+y);i++){
                 if(x%i==0 && y%i==0){
                 break;
                 }
             }
             if(i==(x+y)){
                 i=1;
             }
             
              x=a;
              y=i;
         }
         cout<<x+y<<endl;
         return 0;
}