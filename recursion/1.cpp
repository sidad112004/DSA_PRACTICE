#include<iostream>
using namespace std;
void fun(int a){
    //base case
    if(a==4){
    
        cout<<"yes";
    return ;
    }
a++;
fun(a);

}
int main(){
int a=0;
fun(a);
}