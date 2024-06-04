#include <iostream>
using namespace std;

int main() {
	int t;
	while(t--){
	    int n;
	    
	    cin>>n;
	    int a[n-1];
	    int b[n-1];
	    int ans =0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(int i =0;i<n;i++){
	        ans=ans+a[i];
	        
	    }
	    for(int i=0;i<n;i++){
	        ans=ans-b[i];
	        if(ans<=0){
	            cout<<i+1<<endl;
	        }
	    }
	    
	     
	    
	    
	}
	return 0;
}
