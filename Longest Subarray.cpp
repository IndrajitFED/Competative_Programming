#include <bits/stdc++.h>
using namespace std;


int longestSubarray(int *arr,int n) {
        int maxx = 0;
        set<int>set_test;
        int i = 0;
        int j = 1;
        while (i < n-1) {
            set_test.insert(arr[i]);
            while (j < n && abs(arr[i]-arr[j]) < 2) {
                // If the Element Does not include in the set then include that
                if (!set_test.count(arr[j])) {
                    // if the set becomes equals to 2 then break that is we included the two element
                    if (set_test.size() == 2) {
                        break;
                    } else {
                        set_test.insert(arr[j]);
                    }
                }
                ++j;
            }
            cout << j <<" "<<i<< endl;
            maxx = max(maxx, j - i);
            // increament i
            ++i;
            // increment j by j = i + 1
            j = i + 1;
            set_test.clear();
        }
        return maxx;
}

int main() {

    int arr[7]={1,1,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << longestSubarray(arr,n);
    return 0;
}




