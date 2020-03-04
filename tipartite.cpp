#include<bits/stdc++.h>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
	int n;
	cin>>n;
	int edges;
	cin>>edges;
	int arr[n];
	int clr[n];
	int adj[n][n];
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
		clr[i]=0;
		for(int j=0;j<n;j++)
		{
			adj[i][j]=0;
		}
	}
	for(int i=0;i<edges;i++)
	{
		int x;
		int y;
		cin>>x;
		cin>>y;
		adj[x][y]=1;
		adj[y][x]=1;
	}
	stack<int> s;
	int src;
	cin>>src;
	arr[src]=1;
	s.push(src);int c=0;
	while(s.size()!=0)
	{
		cout<<s.top();
		int x=s.top();
		s.pop();
		for(int i=n-1;i>-1;i--)
		{
			if(adj[x][i]==1&&arr[i]==0)
			{
				s.push(i);
				arr[i]=1;
			}
			else if(adj[x][i]==1&&arr[i]==1)
			{
				cout<<endl;
				cout<<"CYCLE DETECTED";
				c=1;
				break;
			}
		}
		if(c==1)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			adj[x][i]=0;
			adj[i][x]=0;
		}
	}
	/*if(c==1)
	{
		stack<int> s;
	int src;
	cin>>src;
	clr[src]=1;
	s.push(src);
	while(s.size()!=0)
	{
		cout<<s.top();
		int x=s.top();
		s.pop();
		for(int i=n-1;i>-1;i--)
		{
			if(adj[x][i]==1&&arr[i]==0)
			{
				s.push(i);
				arr[i]=1;
				if(clr[x]==1)
				{
					clr[i]=2;
				}
				else if(clr[x]==2)
				{
					clr[i]=3;
				}
				else if(clr[x]==3)
				{
					clr[i]=1;
				}
			}
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<clr[i]<<" ";
	}
	}
	else
	{
		cout<<endl;
		cout<<"NON PERTITE";
	}*/
}