#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    int ans =fact(n)*fact(n-1);
    cout<<ans<<endl;
}
int main(){
    int n=5;
    
    
    fact(n);
}
