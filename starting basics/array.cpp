#include<iostream>
using namespace std;
int main(){
    int a[6]={0,2,0,3,4,6};
    for(int i=0;i<6;i++){
     if(a[i]==0){
        for(int j=i+1;j<6;j++){
            if(a[j]!=0){
                swap(a[j],a[i]);
                break;
            }
        }
     }

    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<"    ";
    }
}