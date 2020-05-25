#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,base=2;
	    long long int ans1=1,ans2;
	    cin>>n;
	    int A[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>A[j];
	    }
	     ans2=n*(n-1)/2;
	     while (n != 0) {
        ans1 *= base;
        --n;
        }
	   
	    cout<<ans1-1<<endl<<ans2<<endl; 
	}
	return 0;
}   
