#include<bits/stdc++.h>
using namespace std;
int i,j,k,m;
string s;
int main()
{
    cin>>s;
	for(i=0;s[i];i++)
	{
		for(j=i;s[++j];)
		{
			for(k=0;s[i+k]==s[j+k];)k++;
			m=max(m,k);
		}
	}
	cout<<m;
}
