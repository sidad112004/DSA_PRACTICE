#include<iostream>
#include<deque>
#include<stack>
#include<queue>
// it is nothing but vector in vector we can insert the number from back 
//in this we can push the number from the front also
//same method and sentance to create  deque
using namespace std;
int main(){
deque<int>a;
a.push_back(4);
a.push_back(3);
a.push_front(5);
for(int i:a){
    cout<<i<<endl;
}
a.pop_back();
for(int i:a){
cout<<i<<endl;
}
a.pop_front();
for(int i:a){
    cout<<i<<endl;
}
// a.erase(a.at(1),a.at(2));
}