#include<iostream>
using namespace std;
bool search(int a[],int size,int k){
    if(size==0){
        return false;
    }
    if(a[0]==k){
        return true;
    }
    else{
        bool ream=search(a+1,size-1,k);
        return ream;
    }

}
int main(){
    int a[5]={1,3,4,5,6};
    int size=5;
    int key=3;
    int ans=search(a,size,key);
    if(ans){
        cout<<"yes"<<endl;
    }
    
    else{
        cout<<"no"<<endl;
    }

}