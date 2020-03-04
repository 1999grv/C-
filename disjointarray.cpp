//WE NEED TO PRINT AFTER EVERY ENTRY THE SIZE OF CONNECTED COMPONENTS ...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    n=n+1;
    vector<long> arr;
    for(int i=0;i<n;i++)
    {
        arr.push_back(0);
    }
    int edges;
    cin>>edges;
    for(int i=0;i<edges;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        if(arr[x]==0)
        {
            arr[y]=x;
            arr[x]=x;
        }
        else
        {
            arr[y]=arr[x];
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
