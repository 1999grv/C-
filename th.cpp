// And Then the GOD Entered..   
#include<bits/stdc++.h>
 using namespace std;
 //a_example.txt
 //b_read_on.txt
 //c_incunabula.txt
 //d_tough_choices.txt
 //e_so_many_books.txt
 //f_libraries_of_the_world.txt
typedef long long int ll;
#define endl "\n"
#define fi first
#define sec second 
#define pb push_back
#define test cout<<"debuged\n";
#define INF ll(1e18)
#define MOD 1000000007
#define debug(x) cout<<x<<"\n";
#define pll pair<ll,ll>
#define mp make_pair
#define Minato_Namikaze ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define MAX 200015

struct lib
{
    ll id;
    ll numbook;
    ll signupdays;
    ll perday;
    set<pll, greater<pll> > books;
};

struct Ans
{
    ll id;
    vector<ll> snn;    
};

//a_example
//b_read_on
//c_incunabula
//d_tough_choices
//e_so_many_books
//f_libraries_of_the_world

int main()
{
    Minato_Namikaze
    #ifndef ONLINE_JUDGE
    freopen("a_example.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    #endif
    
    ll nb, nl, d;
    cin >> nb >> nl >> d;
    vector<ll> bookcost(nb);
    vector<pll> sortbook;
    for(ll i = 0; i < nb; ++i)
    {
        cin >> bookcost[i];
        sortbook.pb({bookcost[i],i});
    }
    sort(all(sortbook));
    reverse(all(sortbook));
    lib code[nl];
    vector<pll> libval;
    for(ll i = 0; i < nl; ++i)
    {
        cin >> code[i].numbook >> code[i].signupdays >> code[i].perday;
        code[i].id = i;
        for(ll j = 0; j < code[i].numbook; ++j)
        {
            ll k;
            cin >> k;
            code[i].books.insert({bookcost[k],k});
        }
        ll val = 0;
        for(auto x : code[i].books)
            val += ((bookcost[x.sec]*lib.perday)/lib.signupdays);
        libval.pb({val,i});
    }
    sort(all(libval));
    reverse(all(libval));
    map<ll,ll> ma;
    vector<Ans> ans;
    for(auto x : libval)
    {
        ll h = d - code[x.sec].signupdays;
        ll send = min(code[x.sec].numbook, (h * code[x.sec].perday));
        vector<ll> tosend;
        for(auto x : code[x.sec].books)
        {
            if(!(ma.count(x.sec) >= 1))
            {
                if(send > 0)
                {
                    ma[x.sec]++;
                    tosend.pb(x.sec);
                }
                else
                    break;
                send--;
            }
        }
        if(tosend.size() != 0)
        {
            Ans obj;
            obj.id = x.sec;
            obj.snn = tosend;
            ans.pb(obj);
        }
    }
    cout << ans.size() << endl;
    for(auto x : ans)
    {
        cout << x.id << " " << x.snn.size() << endl;
        for(auto y : x.snn)
            cout << y << " ";
        cout << endl;
    }





    
}