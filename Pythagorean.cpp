#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll             long long
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

int32_t main()
{
    w(t)
    {   
        int c;
        cin >>c;
        set<pair<int, int>> result;
        for(int i=0;i<=c;++i){
            for(int j=0;j<=c;++j){
                if((i*i+j*j) == c){
                    result.insert(make_pair(min(i, j), max(i, j)));
                }
            }
        }
        for(auto i: result) {
            cout << "(" << i.first << "," << i.second << ")\n";
        }
        
    }
    return 0;
}
