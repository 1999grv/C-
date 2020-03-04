#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int edges;
    cin>>edges;
    int src;
    cin>>src;
    int arr[n];int cy[n];
    int adj[n][n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
        cy[i]=0;
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
    }
    stack<int> s;
    s.push(src);
    int x;int c=0;
    while(s.size()!=0)
    {
        cout<<s.top();
        x=s.top();
        s.pop();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(adj[x][i]==1&&arr[i]==0)
            {
                s.push(i);
                arr[i]=1;
            }
            else if(adj[x][i]==1&&arr[i]==1)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<endl;
            cout<<"it's a graph ";
            break;
        }
    }
}

