#include<iostream>
using namespace std;
  
void print(int n){
    if(n==0){
        return ;
    }
    else{
        cout<<"siddesh"<<endl;
        n--;
        print(n);
    }

}

int main(){
   int n;
    
    cout<<"enter"<<endl;
    cin>>n;
    print(n);

    
}