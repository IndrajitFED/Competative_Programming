#include <cstdio>
 
int n,am,ps[200],a,b;
char s1[200005],s2[200005];
bool bb;
 
int main()
{
	scanf("%d",&n);
	scanf("%s",s1+1);
	scanf("%s",s2+1);
	for(int i=1; i<=n; i++)
	{
		if(s1[i]!=s2[i])
		{
			am++;
			ps[s2[i]]=i;
		}
	}
    
	for(int i=1; i<=n; i++)
	{
		if(s1[i]!=s2[i])
		{
			if(ps[s1[i]])
			{
				bb=1;
				a=i;
				b=ps[s1[i]];
			}
			if(s2[i]==s1[ps[s1[i]]])
			{
				am--;
				break;
			}
		}
	}
	if(bb) printf("%d\n%d %d\n",am-1,b,a);
	else printf("%d\n-1 -1\n",am);
    return 0;
}
