#include<iostream>
using namespace std;
bool search(int a[],int e,int s,int k){
    if(s>e){
        return false;
    }
        int mid=s+(e-s)/2;
    if(a[mid]<k){
        return search(a,e,mid+1,k);
    }
    if(a[mid]>k){
        return search(a,mid-1,s,k);
    }

}
int main(){
    int a[5]={1,2,3,4,5};
    int size = 5;
    int key = 5;
    search(a,size,0,key);
    
}