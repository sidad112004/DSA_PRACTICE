#include<iostream>
using namespace std;
int reverse(int arr[],int i,int j){
if(j<i){
   for(int i=0;i<5;i++){
    cout<<arr[i]<<"   "<<endl;
   }

}
else{
    swap(arr[i],arr[j]);
    reverse(arr,i+1,j-1);
}


}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    reverse(arr,0,4);
}