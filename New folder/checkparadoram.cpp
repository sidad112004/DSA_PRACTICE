#include<iostream>
using namespace std;

bool para(string &s,int i,int j){
    if(i>j){
        return true;
    }
        
    if(s[i]!=s[j]){
        return false;
    }

    return para(s,i+1,j-1);
    
    

}
int main(){
    string s;
    cin>>s;
    int size=s.length();
    int k=para(s,0,size-1);
    if(k){
        cout<<"yes";
    }
    else{
        cout<<"NO"<<endl;
    }
}