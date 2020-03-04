#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	freopen("output.in","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c5=0;
		int c2=0;
		int ctr=0;
		for(int i=1;i<=n;i++)
		{
			
			if(i%10==0)
			{
				int x=10;
				while(i%x==0)
				{
					ctr++;
										if(i%x==5)
					{
						ctr++;
					}
					x=x*10;
					if(i%x!=0)
					{
						break;
					}
				}
				
			}
			else if(i%10==5)
			{
				c5+=1;
			}
			else if(i%10==2)
			{
				c2+=1;
			}
		}
		if(c2<c5)
		{
			cout<<c2+ctr<<endl;
		}
		else
		{
			cout<<c5+ctr<<endl;
		}
	}
}