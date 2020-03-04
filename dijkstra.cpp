#include<bits/stdc++.h>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
		int n,edges,src;
		cin>>n;
		cin>>edges;
		cin>>src;
		int adj[n][n];
		int arr[n];
		int prt[n];
		int cst[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=0;
			cst[i]=1000;
			prt[i]=i;
			for(int j=0;j<n;j++)
			{
				adj[i][j]=0;
			}
		}
		for(int i=0;i<edges;i++)
		{
			int x;
			int y;
			int z;
			cin>>x;
			cin>>z;
			cin>>y;
			adj[x][y]=z;
			adj[y][x]=z;
		}
		queue<int> q;
		q.push(src);
		cst[src]=0;
		arr[src]=1;
		while(q.size()!=0)
		{
			for(int i=0;i<n;i++)
			{
				if(adj[q.front()][i]!=0&&arr[i]==0)
				{
					if(adj[q.front()][i]+cst[q.front()]<cst[i])
					{
						cst[i]=adj[q.front()][i]+cst[q.front()];
						prt[i]=q.front();
						q.push(i);
					}
				}
			}
			arr[q.front()]=1;
			q.pop();
		}
		for(int i=0;i<n;i++)
		{
			cout<<cst[i]<<" ";
		}

}