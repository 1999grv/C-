#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;int ctr=0;int grv=0;int k=0;int f=0;int r=0;
    if(s.length()>3)
    {
    for(long i=1;i<s.length()-2;i++)
    {
        if(s.at(i)=='A'&&s.at(i+1)=='B'&&s.at(i+2)!='A'&&s.at(i-1)!='B')
        {
            ctr++;
        }
        else if(s.at(i)=='A'&&s.at(i+1)=='B'&&s.at(i+2)=='A')
        {
            grv++;
        }
        if(s.at(i)=='B'&&s.at(i+1)=='A'&&s.at(i+2)!='B'&&s.at(i-1)!='A')
        {
            f++;
        }
        else if(s.at(i)=='B'&&s.at(i+1)=='A'&&s.at(i+2)=='B')
        {
            r++;
        }
    }
    if(s.at(0)=='A'&&s.at(1)=='B'&&s.at(2)!='A')
    {
        ctr++;
    }
    else  if(s.at(0)=='A'&&s.at(1)=='B'&&s.at(2)=='A')
    {
        grv++;
    }
    if(s.at(0)=='B'&&s.at(1)=='A'&&s.at(2)!='B')
    {
        f++;
    }
    else if(s.at(0)=='B'&&s.at(1)=='A'&&s.at(2)=='B')
    {
        r++;
    }
    if(s.at(s.length()-1)=='A'&&s.at(s.length()-2)=='B'&&s.at(s.length()-3)!='A')
    {
        ctr++;
    }
    else if(s.at(s.length()-1)=='A'&&s.at(s.length()-2)=='B'&&s.at(s.length()-3)=='A')
    {
        grv++;
    }
    if(s.at(s.length()-1)=='B'&&s.at(s.length()-2)=='A'&&s.at(s.length()-3)!='B')
    {
        f++;
    }
    else if(s.at(s.length()-1)=='B'&&s.at(s.length()-2)=='A'&&s.at(s.length()-3)=='B')
    {
        r++;
    }
    }
    else
    {
        if(s.length()<3)
        {
            cout<<"NO"<<endl;
            k++;
        }
        if(s.at(0)=='A'&&s.at(1)=='B'&&s.at(2)!='A')
        {
            ctr++;
        }
        else if(s.at(0)=='A'&&s.at(1)=='B'&&s.at(2)=='A')
        {
            grv++;
        }
        if(s.at(0)=='B'&&s.at(1)=='A'&&s.at(2)!='B')
        {
            f++;
        }
        else if(s.at(0)=='B'&&s.at(1)=='A'&&s.at(2)=='B')
        {
            r++;
        }
    }
    if(k==0)
    {
    if(ctr+f>=2||grv+r>=2||ctr+r>=2||grv+f>=2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    }
}
