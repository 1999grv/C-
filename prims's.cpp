#include<bits/stdc++.h>
using namespace std;
int father(int x,int arr[])
{
	if(arr[x]==x)
	{
		return x;
	}
	else
	{
		return father(arr[x],arr);
	}
}
void connect(int x,int y,int arr[])
{
	int xf=father(x,arr);
	int yf=father(y,arr);
	arr[yf]=xf;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	freopen("output.in","w",stdout);
	#endif
	int src,t1,t2;
	int dest;
	cin>>src>>dest;
	t1=src;
	int min1=1000;
	int min2=1000;int x,y;
	while(src!=dest)
	{
		int x,y;
		for(int i=0;i<n;i++)
		{
			if(min1>adj[t1][i]&&adj[t1][i]!=0&&arr[i]==0)
			{
				min1=adj[t1][i];
				x=i;
			}
			if(min2>adj[src][i]&&adj[src][i]!=0&&arr[i]==0)
			{
				min2=adj[src][i];
				y=i;
			}
		}
		if(min1<min2)
		{
			connect(src,x,arr);
			t1=src;
			src=x;
		}
		else
		{
			connect(src,t1,arr)
			t
		}
	}
}