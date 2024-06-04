#include<iostream>
using namespace std;
void printl(int i,int n){
     if(i>n){
        return;
     }
     else{
       
        cout<<i<<endl;
         i++;
        printl(i,n);
     }

}
 void printb(int n){
    if(n==0){
        return ;
    }
    else{
        cout<<n<<endl;
        n--;
        //whlie backtraacking do not use n-- or i--;fincton instead use the n-1 and i-1     
        printb(n);
    }

 }
int main(){
    int n;
    cout<<"enter the n :- ";
    cin>>n;
    printl(1,n);
    printb(n);
}