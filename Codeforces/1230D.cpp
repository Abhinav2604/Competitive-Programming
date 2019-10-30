#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define MP make_pair
#define PB push_back
#define X first
#define Y second
using namespace std;
map<ull,ll> my_map;
set<ull> ones;
set<ull> twos;
vll num;
map<ull, vll> mapps;
vll skill;
int main()
{
    fast;
   // fio;
    ll n;
    ull a;
    cin>>n;
    rep(i,n)
    {
    	cin>>a;
    	num.pb(a);
    	my_map[a]++;
    	mapps[a].pb(i);
    }
    rep(i,n)
    {
    	cin>>a;
    	skill.pb(a);

    }
    for(auto it=my_map.begin();it!=my_map.end();it++)
    {
    	if((it->s)>1)
    		twos.insert(it->f);
    	else
    		ones.insert(it->f);
    }

    set<ull> temp;
    for(auto it=twos.begin();it!=twos.end();it++)
    {
    	ll k=(*it);
    	for(auto ot=ones.begin();ot!=ones.end();ot++)
    	{
    		if((k|(*ot))==k)
    			temp.insert(*ot);
    	}
    	for(auto ot=temp.begin();ot!=temp.end();ot++)
    	{
    		if(ones.find(*ot)!=ones.end())
    			ones.erase(*ot);
    	}
    }

    ll sum=0;
    for(auto it=twos.begin();it!=twos.end();it++)
    {     auto ik=mapps[*it];
    	for(int u:ik){
    		sum+=skill[u];

    	}
    	
    }
    for(auto it=temp.begin();it!=temp.end();it++)
    {     vll v=mapps[*it];
    	for(ll k=0;k<mapps[*it].size();k++)
    	{
            sum+=skill[v[k]];
    	}
    }
    cout<<sum;








    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}