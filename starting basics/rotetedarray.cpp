#include<iostream>
using namespace std;
int main(){
    int a[6]={0,1,2,3,4,5};

    int n;
    int b[6];
    
    cout<<"enter the value : "<<endl;
    cin>>n;
     for(int i=5;i>=0;i--){
        if(i+n>5){
      b[((i+n)%5)-1]=a[i];
        }
        else{
            b[i+n]=a[i];
        }
     }
    for(int i=0;i<6;i++){
        cout<<b[i]<<"   ";
    }
}