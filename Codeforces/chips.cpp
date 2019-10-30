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
   // fio;
    ll n,a;
    unordered_map<ll,ll> my;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        my[a]++;
    }
   ll even_min=10000;
   ll odd_min=100000;
   ll o_count=0;
   ll even_count=0;
   for(auto it=my.begin();it!=my.end();it++)
   {
   	if((it->first)&1)
   	{  //cout<<it->first<<" "<<it->second<<"i\n";
   		if((it->second)<odd_min)
   			odd_min=it->second;
   	     o_count=o_count+(it->second);
   	}
   	else
   	{
   		if((it->second)<even_min)
   			even_min=it->second;
   	     even_count=even_count+(it->second);
   	}
   }

   if((even_count)>(o_count))
   	   cout<<(o_count);
   	else
   		cout<<(even_count);
    
    return 0;
}