// C++ program to check if the array 
// with odd sum is possible 
#include <bits/stdc++.h> 
using namespace std; 

// Function to check if the 
// sum of the array can be made odd. 
bool isOdd(int arr[], int n) 
{ 
	int l, r, flag = 0, flag1 = 0, sum = 0; 

	// Find sum of all elements and increment 
	// check for odd or even elements in the array 
	// so that by changing ai=aj, 
	// the sum of the array can be made odd 
	for (int i = 0; i < n; i++) { 
		sum += arr[i]; 
		if (arr[i] % 2 == 0 && flag == 0) { 
			flag = 1; 
			l = arr[i]; 
		} 
		if (arr[i] % 2 != 0 && flag1 == 0) { 
			r = arr[i]; 
			flag1 = 1; 
		} 
	} 

	// If the sum is already odd 
	if (sum % 2 != 0) { 
		return true; 
	} 

	// Else, then both the flags should be checked. 
	// Here, flag1 and flag represent if there is 
	// an odd-even pair which can be replaced. 
	else { 
		if (flag1 == 1 && flag == 1) 
			return true; 
		else
			return false; 
	} 
} 

// Driver code 
int main() 
{ 
	int ar[] = { 5, 4, 4, 5, 1, 3 }; 
	int n = sizeof(ar) / sizeof(ar[0]); 
	bool res = isOdd(ar, n); 

	if (res) 
		cout << "Yes" << endl; 
	else
		cout << "No" << endl; 
	return 0; 
} 
