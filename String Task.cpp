#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	int m,i;
   	string s;
   	cin>>s;
   	m=s.length();
   	for (i=0;i<m;i++)
  	{
      s[i]=(char)tolower(s[i]);
      if (s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')
        continue;
        else
      cout <<"."<<s[i];
  	}
  	return 0;
}
