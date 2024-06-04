//class user defined data type
//class is like struct 
#include<iostream>
using namespace std;
// using header file we can assces the class #include "hero"

class hero{
    //properties
    private:
         int health=4;

    public:
 //acess int he class only 
           
          char s;
         void print(){
            cout<<s<<endl;
         }
         int geth(){
            return health;
         }


};
int main(){
    //create an object 
    hero *h2  = new hero;
     
    
   
    hero h1;
    int k=h1.geth();
    //asscess the value by using .  operator  
   // cout<<h1.health<<endl; privite acces id there 
    cout<<k<<endl; 

    cout<<"size "<<sizeof(h1)<<endl;
}