/*
Geeks for Geeks Question Coins of Piles
-Indrajit Shinde
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        ll ans=INT_MAX,temp=0;
        cin>>n>>k;
        ll sum=0;
        ll a[n];
        // Input the array Elements
        for(int i=0;i<n;i++)cin>>a[i];
        // Sort the array
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            // temp is been used to store the previous total piles (so that if they are totally removed) it would be counted
            temp=sum;
            // caluclating the sum of all the elements
            sum+=a[i];
            for(int j=n-1;j>i;j--)
            // taking the max element and subtracting it with low element
                if(a[j]-a[i]-k>0)
                    temp+=a[j]-a[i]-k;
            ans=min(ans,temp);  //Storing minimum number of coins req to remove that the ans
        }
        cout<<ans<<endl;
    }
	return 0;
}
