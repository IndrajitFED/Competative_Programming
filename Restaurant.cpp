#include <bits/stdc++.h>
using namespace std;

// function to sort the vector elements 
// by second element of pairs 
bool sortbysec(const pair<int,int> &a, 
			const pair<int,int> &b) 
{ 
	return (a.second < b.second); 
} 


int main() {
    int n;
    cin >> n;
    int start[n];
    int finish[n];

        // declaring vector of pairs 
        vector< pair <int, int> > vect; 

        for(int i=0;i<n;i++){
            cin >> start[i] >> finish[i];
        }

        // Entering values in vector of pairs 
        for (int i=0; i<n; i++) {
            vect.push_back( make_pair(start[i],finish[i]) ); 
        }

        // Using sort() function to sort by 2nd element 
        // of pair 
        sort(vect.begin(), vect.end(), sortbysec);  

        int cnt =1;
        int init = vect[0].second;
        for(int i=0;i<n-1;i++){
            if(vect[i+1].first > init){
                init = vect[i+1].second;
                cnt++;
            }
        }

        cout << cnt << endl;
    return 0;
}
