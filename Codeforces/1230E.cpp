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
#define MP make_pair
#define PB push_back
#define X first
#define Y second
using namespace std;
map<ll,ll> tree[100002];
vector<bool> vis(100002,0);
vi vec[100002];
vll beauty(100002,0);
ll mod;
 
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    if(a==0)
      return b;
    return gcd(b, a % b);        
} 
 
void dfs(int i, ll &sum)
{
      
      vis[i]=true;
      tree[i].insert({beauty[i],1});
      for(ll k=0;k<vec[i].size();k++)
      {
        if(!vis[vec[i][k]])
        { dfs(vec[i][k],sum);
          for(auto it=tree[vec[i][k]].begin();it!=tree[vec[i][k]].end();it++)
          {
            tree[i][gcd(beauty[i],it->f)]+=(it->s);
          }
          tree[vec[i][k]].clear();
        }
      }
      for(auto it=tree[i].begin();it!=tree[i].end();it++)
        sum=(sum+(((it->f)%mod)*((it->s)%mod)))%mod;

      return ;
}
int main()
{
    fast;
    
    #ifndef ONLINE_JUDGE
     fio;
    #endif
    mod=1000000007;
    ll n,a,b;
    cin>>n;
    rep(i,n)
    {
      cin>>beauty[i+1];
    }
    rep(i,n)
    vec[i].clear();
    rep(i,n-1)
    {
       cin>>a>>b;
       vec[a].pb(b);
       vec[b].pb(a);
    }
    ll sum=0;
    dfs(1,sum);
   // cout<<(long long)(mod+(long long)(mod*mod))<<"\n";
 
    
    /*repA(i,1,n)
    {
      for(auto it=tree[i].begin();it!=tree[i].end();it++)
      {
        sum=(sum+(((it->f)%mod)*((it->s)%mod))%mod)%mod;
      }
    }*/
    cout<<sum;
 
 
 
 
 
    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}