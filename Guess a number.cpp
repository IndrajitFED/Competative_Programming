#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void minimize(int &a, int b) { a = std::min(a, b); }
void maximize(int &a, int b) { a = std::max(a, b); }
 
int32_t main()
{
    int mx = 2 * 1000 * 1000 * 1000;
	int mn = -mx;
	
	int n; cin >> n;

	while (n --> 0) {
		string s; cin >> s;
		int x; cin >> x;
		string ans; cin >> ans;
		
		if (ans == "N") {
			if (s == ">=") s = "<";
			else if (s == "<") s = ">=";
			else if (s == "<=") s = ">";
			else s = "<=";
		}
		
		if (s == ">=") maximize(mn, x);
		else if (s == ">") maximize(mn, x + 1);
		else if (s == "<=") minimize(mx, x);
		else minimize(mx, x - 1);
	}
	
	if (mn <= mx) cout << mn;
	else cout << "Impossible";
    return 0;
}
 
