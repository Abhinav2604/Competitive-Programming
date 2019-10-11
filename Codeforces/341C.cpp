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
    ll n,k,d;
    cin>>n>>k>>d;
    vector<ll> vec(n+1,0);
    vector<ll> vec_2(n+1,0);

    for(ll i=1;i<=k && i<=n;i++)
    	{vec[i]=1;}

    for(ll i=2;i<=n;i++)
    {
    	for(ll j=1;j<=k && j<i;j++)
    	{
    		vec[i]=(vec[i]%mod+vec[i-j]%mod)%mod;
    	}
    }

    for(ll i=1;i<d && i<=n;i++)
    {
    	vec_2[i]=1;
    }
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=1;j<d && j<i;j++)
    		vec_2[i]=(vec_2[i]%mod+vec_2[i-j]%mod)%mod;
    }

  if(((vec[n]-vec_2[n])%mod)<0)
  {
  	cout<<(((vec[n]-vec_2[n])%mod) + mod)%mod;
  }
  else
  {
  	cout<<((vec[n]-vec_2[n])%mod);
  }



    
    return 0;
}