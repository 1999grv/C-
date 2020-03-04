#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int edges;
    cin>>edges;
    int arr[n];
    int adj[n][n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    int src;
    cin>>src;
    for(int i=0;i<edges;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        adj[x][y]=1;
    }
    stack<int> st;
    st.push(src);//JUST NEED TO ADD 1 MORE LOOP FOR COMING UP WITH MOTHER VERTEX;-->0(N^3)
    cout<<st.top();
    while(st.size()!=0)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(adj[st.top()][i]==1&&arr[i]==0)
            {
                st.push(i);
                arr[i]=1;
                c=1;
                break;
            }
        }
        if(c==0)
        {
            st.pop();
        }
        else
        {
            cout<<st.top();
        }
    }
}
