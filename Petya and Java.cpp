#include <bits/stdc++.h>
using namespace std;
 
string s;
int main()
{

    cin>>s;
    int len = s.length();
    if(len > 19){
    	cout << "BigInteger\n"; 
		return 0;	
	}
	
    stringstream geek(s);
    unsigned long long x = 0; 
    geek >> x; 
    
    
	if(x<=127){
		cout << "byte\n"; 
	}
	else if(x<=32767){
		cout << "short\n";
	}
	else if(x<=2147483647){
		cout << "int\n";
	}
	else if(x<=9223372036854775807){
		cout << "long\n";
	}
	else{
		cout << "BigInteger\n";
	}
	
return 0;
}
