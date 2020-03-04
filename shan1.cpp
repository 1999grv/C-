#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;set<pair<int,int> > st;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s.at(i)=='A'&&s.at(i+1)=='B')
        {
            st.insert(make_pair(i,i+1));
        }
    }
    for(int i=0;i<s.length()-1;i++)
    {
        if(s.at(i)=='B'&&s.at(i+1)=='A')
        {
            st.insert(make_pair(i,i+1));
        }
    }
    vector<pair<int,int> > v;
    for(pair<int,int> x:st)
    {
        v.push_back(make_pair(x.first,x.second));
    }
    if(v.size()<2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int g=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i].second!=v[i+1].first)
            {
                cout<<"YES"<<endl;
                g++;
                break;
            }
        }
        if(g==0)
        {
            cout<<"NO"<<endl;
        }
    }
}
