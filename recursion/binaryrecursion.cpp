#include<iostream>
using namespace std;
bool sort(int a[],int size){
    if(size==1||size==1){
        return true;
    }
if(a[0]>a[1]){
    return false;
}
else{
    bool rem=sort(a+1,size-1);
    return rem;
}
}
int main(){
    int a[5]={2,5,4,4,6};
    int size=5;
    int ans=sort(a,size);
    if(ans){
        cout<<"yes sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}