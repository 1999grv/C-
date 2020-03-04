#include<bits/stdc++.h>
using namespace std;
inline long distx(long x1,long x2,long y1)
{
    long ans1=abs(x2-x1);
    long ans2=sqrt(x2*x2+y1*y1);
    long ans3=sqrt(x1*x1+y1*y1);
    long fans;//=(max(ans1,ans2,ans3));
    if(ans1>ans2&&ans1>ans3)
    {
        fans=ans1;
    }
    else if(ans2>ans3)
    {
        fans=ans2;
    }
    else
    {
        fans=ans3;
    }
    long ffans=0;
    if(fans==ans1)
    {
        if(fans==ans2+ans3)
        {
            ffans=1;
        }
    }
    else if(fans==ans2)
    {
        if(fans==ans1+ans3)
        {
            ffans=1;
        }
    }
    else if(fans==ans3)
    {
        if(fans==ans1+ans2)
        {
            ffans=1;
        }
    }
    return ffans;
}
inline long disty(long y1,long y2,long x1)
{
    long ans1=abs(y2-y1);
    long ans2=sqrt(y2*y2+x1*x1);
    long ans3=sqrt(y1*y1+x1*x1);
    long fans;//=(max(ans1,ans2,ans3));
     if(ans1>ans2&&ans1>ans3)
    {
        fans=ans1;
    }
    else if(ans2>ans3)
    {
        fans=ans2;
    }
    else
    {
        fans=ans3;
    }
    long ffans=0;
    if(fans==ans1)
    {
        if(fans==ans2+ans3)
        {
            ffans=1;
        }
    }
    else if(fans==ans2)
    {
        if(fans==ans1+ans3)
        {
            ffans=1;
        }
    }
    else if(fans==ans3)
    {
        if(fans==ans1+ans2)
        {
            ffans=1;
        }
    }
    return ffans;
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,m;
        cin>>n;
        cin>>m;vector<long> v;
        vector<long> t;
        for(long i=0;i<n;i++)
        {
            long x;
            cin>>x;
            v.emplace_back(x);
        }
        for(long i=0;i<m;i++)
        {
            long x;
            cin>>x;
            t.emplace_back(x);
        }
        vector<pair<long,long> > xax;
        vector<pair<long,long> > yax;
        for(long i=0;i<v.size();i++)
        {
            for(long j=i+1;j<v.size()-1;j++)
            {
                xax.emplace_back(make_pair(v[i],v[j]));
            }
        }
        for(long i=0;i<v.size();i++)
        {
            for(long j=i+1;j<v.size()-1;j++)
            {
                yax.emplace_back(make_pair(t[i],t[j]));
            }
        }
        long sum=0;
        for(long i=0;i<xax.size();i++)
        {
            cout<<xax[i].first<<" "<<xax[i].second<<endl;
            for(long j=0;j<t.size();j++)
            {
                sum+=distx(xax[i].first,xax[i].second,t[j]);
            }
        }
        cout<<yax.size();
        for(long i=0;i<yax.size();i++)
        {
            cout<<yax[i].first<<" "<<yax[i].second<<endl;
            for(long j=0;j<v.size();j++)
            {
                sum+=disty(yax[i].first,yax[i].second,v[j]);
            }
        }
        cout<<sum<<endl;
    }
}
