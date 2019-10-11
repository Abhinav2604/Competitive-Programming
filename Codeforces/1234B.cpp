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


using namespace std;

int main()
{
    fast;
    //fio;
    ll n,k,a;
    map<ll ,ll> maps;
    set<ll> ss;
    vector<ll> vec;
    ll prev=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    { cin>>a;
       if(ss.find(a)==ss.end())
       {
           if(maps.size()==k)
           	  {auto it=maps.begin();
           	  	ss.erase(it->second);
           	  	maps.erase(maps.begin());
           	   }
           	maps[i]=a;
           	ss.insert(a);
       }
    }
    cout<<maps.size()<<"\n";
    for(auto it=maps.rbegin();it!=maps.rend();it++)
    {
    	cout<<it->second<<" ";
    }


    
    return 0;
}