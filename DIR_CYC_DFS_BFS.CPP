#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int edges;
    cin>>edges;
    int adj[n][n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
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
        //adj[y][x]=1;
    }
    int src;
    cin>>src;
    //DFS TRAVERSAL IN UNDIRECTED GRAPH....
    cout<<"DFS TRAVERSAL IN UNDIRECTED GRAPH...."<<endl;
    stack<int> s;
    s.push(src);
    arr[src]=1;
    while(s.size()!=0)
    {
        cout<<s.top();
        int x=s.top();
        s.pop();int grv=0;
        for(int i=n-1;i>-1;i--)
        {
            if(adj[x][i]==1&&arr[i]==0)
            {
                s.push(i);
                arr[i]+=1;
            }
            else if(adj[x][i]==1&&arr[i]==2)
            {
                grv+=1;
                cout<<"cycle is present";
                break;
            }
        }
        arr[x]=2;
        if(grv!=0)
        {
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    //BFS TRAVERSAL IN UNDIRECTED GRAPH....
    cout<<"BFS TRAVERSAL IN UNDIRECTED GRAPH...."<<endl;
        for(int i=0;i<edges;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    queue<int> q;
    q.push(src);
    arr[src]=1;
    while(q.size()!=0)
    {
        cout<<q.front();
        for(int i=0;i<n;i++)
        {
            if(adj[q.front()][i]==1&&arr[i]==0)
            {
                q.push(i);
                arr[i]=1;
            }
        }
        q.pop();
    }
}

