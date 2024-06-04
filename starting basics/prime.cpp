#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin>>n;
    int prime[n];
    for(int i=0;i<n;i++){
        prime[i]=1;
    }
    for(int i=2;i<n;i++){
        if(prime[i]==1){
            cnt++;
         int j=i;
         while(j*2<n){
            prime[j*2]=0;
            j++;
         }
        }
    }
    cout<<cnt<<endl;
    

}