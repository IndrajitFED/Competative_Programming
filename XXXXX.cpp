#include <bits/stdc++.h>
#define ll long long
using namespace std;
int t;
ll n,k,arr[1000005],sum=0,cnt;
int main() {
    cin >> t;
    while(t--){
        cin >> n >> k;
        cnt =n;
        sum = 0;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        // if the sum is divisible by k then we have to remove some elements
        // from the starting and the end
        if(sum % k == 0){
            for(int i=0;i<n;i++){
                cnt--;
                if(arr[i]%k!=0 || arr[n-i-1]%k!=0) break; 
            }
        }
        if(cnt == 0) cout << "-1" << endl;
        else cout << cnt << endl;
        
    }
}
