#include <iostream>
// to insert new elemnet in an array
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
   int b[n];
   
    int j = 0;
    
    for (int i = 0; i < n/2; i++)
    {
        b[j] = a[i];
        j++;
        if((n/2+i)>n){
            cout<<a[j]<<"  "<<endl;
        }
        b[j] = a[n/2 + i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "   " << endl;
    }
}