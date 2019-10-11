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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }

    vector<vector<ll>> vec(200*1000 + 11);
    int ans=INT_MAX;
    ll x, curr;
    for(ll i=0;i<n;i++)
    {
        x=a[i];
        curr=0;
        while(x>0)
        {
        	vec[x].push_back(curr);
        	x=x/2;
        	curr++;
        }
    }

    for(ll i=0;i<=200*1000;i++)
    {
    	if(vec[i].size()<k)
    		 continue;
    	sort(vec[i].begin(),vec[i].end());
    	ans=min(ans,accumulate(vec[i].begin(),vec[i].begin()+k,0));
    }
    cout<<ans;


    
    return 0;
}