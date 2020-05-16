#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll arr[1000005];
ll pre[1000005];
int main() {
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
        memset(pre,0,sizeof(pre));
        pre[0] = 1;
		int sum =0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum += arr[i];
			sum %= n;
			sum = (sum + n) % n;
			pre[sum]++;
		}
		ll ans = 0;
		for(int i=0;i<n;i++){
			ll m = pre[i];
			ans += (m)*(m-1)/2;
		}
		cout << ans << endl;
	}
	return 0;
}
