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
vll vec[500001];
vll parents(500001,0);
vector<bool> vis(500001,0);
vector<vector<pair<ll,ll>>> bact;
long long lowerBound(ll  n,ll key, ll v){
    ll s =0,e=n-1;
    ll ans = -1;

    while(s<=e){
        ll mid = (s+e)/2;

        if(bact[v][mid].f==key){
            ans = mid;
            return mid;
        }
        else if(bact[v][mid].f>key){
            e = mid - 1;
        }
        else{
            ans=mid;
            s = mid + 1;
            
        }
    }

    return ans;
}

long long bsearch(ll l, ll r, ll x,ll v)
{
  while(r>=l)
  {
     ll mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (bact[v][mid].f == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
       else if (bact[v][mid].f> x) 
            r=mid-1; 
  
        // Else the element can only be present 
        // in right subarray 
        else
          l=mid+1;
    } 
  return -1;
}
void dfs(ll i,ll p,ll n)
{
      parents[i]=p;
      vis[i]=true;
      for(ll k=0;k<vec[i].size();k++)
      {
        if(!vis[vec[i][k]])
          dfs(vec[i][k],i,n);
      }
      return ;
}
int main()
{
    fast;
     fio;
    ll n,q,u,v,r;
    cin>>n>>q;

    rep(i,n-1)
    {
        cin>>u>>v;
        vec[u].PB(v);
        vec[v].PB(u);
    }
    vector<pll> p;
    p.pb(make_pair(0,0));
    bact.push_back(p);
    rep(i,n)
    {
      cin>>u;
      p[0].f=0;
      p[0].s=u;
      bact.push_back(p);
      
    }
    // for(ll o=0;o<bact.size();o++)
    // {
    //  cout<<o<<" "<<bact[o][0].f<<" "<<bact[o][0].s<<"\n";
    // }
    dfs(1,0,n);
    repA(i,1,q)
    {
      char c;
      cin>>c;
      if(c=='+')
      {
        cin>>v>>u;
        r=bact[v][bact[v].size()-1].s;
        r=r+u;
        bact[v].push_back({i,r});
      }
      else
      {
        cin>>v;
        u=v;
        ll ans =0;
        if(v!=1 && vec[v].size()==1)
        {
          for(ll p=1;p<=i&& u!=1;p++)
          {
                     u=parents[u];
                     r=lowerBound(bact[u].size(),i-p,u);
                     ans=ans+bact[u][r].s;
                   
          }
          
            ans=ans+bact[v][bact[v].size()-1].s;
        }
        else if(v==1 && n>1)
          ans=0;
        else if( v==1 && n==1)
        {
        
            ans=ans+bact[v][bact[v].size()-1].s;
        }
        else
        {
          for(ll p=1;p<=i && u!=1;p++)
          {
                     u=parents[u];
                     ll m=bsearch(0,bact[u].size()-1,i-p,u);
                     if(m!=-1)
                        { if(m!=0)
                          ans=ans+(bact[u][m].s-bact[u][m-1].s);
                          else
                           ans=ans+bact[u][m].s;}
                     
                        }
          }

           cout<<ans<<"\n";
        }
    }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}