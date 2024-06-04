#include<iostream>
using namespace std;
void sum(int i,int sm){
    if(i<1){
        cout<<sm;
        return;
    }
    else{
       
        sum(i-1,sm+i);
        
    }
}


// another way should be

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }

}
int main(){
    int n;
    cout<<"enter the value";
    cin>>n;
    sum(n,0);
    cout<<sum(n);

}