#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define loopi(n) for(ll i=0;i<n;i++)
#define loopd(n) for(ll i=n;i>0;--i)
#define fori(n) for(ll i=1;i<=n;i++)
#define ford(n) for(ll i=n;i>0;--i)
#define pll pair<long long, long long>
//#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;

ll gcd(ll a,ll b)
{
  if (b == 0)
        return a;
    return gcd(b, a % b);
}
// ll reduce(ll ma,ll mi)
// {
//   ll mod=0;
//   for (; ma>0; ma/10)
//         mod = (mod*10 + ma%10)%mi;
//   return mod;
// }

void DFS(vll adj[],vector<ll> &res,bool visited[],vll val,vll m,vll path,ll node)
{
  visited[node]=true;
  path.push_back(node);
  for(auto i=adj[node].begin();i!=adj[node].end();i++)
	 {
		 if(!visited[*i])
		 DFS(adj,res,visited,val,m,path,*i);
	 }
   if(adj[node].size()==1)
   { bool flag = false;
     unordered_set<ll> g;
     ll mod=m[node];
     ll k,l;
     if(mod==1)
        {
          res[node]=mod-1;
          path.pop_back();
          return ;
        }
      if(val[1]%mod==1)
      { path.pop_back();
        res[node]=mod-1;
        return;
      }
     for(ll i=0;i<path.size();i++)
     {
       k=val[path[i]]%mod;
       if(k==1)
          { path.pop_back();
            res[node]=mod-1;
            return;
          }
       if(k!=0)
       {//ll mi=min(k,mod);
         //ll ma=max(k,mod);
         //ma=reduce(ma,mi);
         l=k;
         //l=k;
       if(l&1)
          flag = true;
       if(l==1)
       {  path.pop_back();
         res[node]=mod-1;
         return ;
       }
       g.insert(l);}
     }
     if(g.size()==0)
       {
         res[node]=0;
         path.pop_back();
         return ;
       }
     if(g.size()==1)
     {
       auto it=g.begin();
       res[node]=mod-(*it);
       path.pop_back();
       return;
     }
     if(!flag)
     { ll min = INT_MAX;
       for(auto it=g.begin();it!=g.end();it++)
       {
         if(min<*it)
            min=*it;
       }
       res[node]=mod-(min);
       path.pop_back();
       return ;
     }
     else
     {
       res[node]=mod-1;
       path.pop_back();
       return ;
     }
   }
   else
   {
     path.pop_back();
   }

}
int main()
{
  std::ios::sync_with_stdio(false);
  int t,i;

  cin>>t;
  vector<ll> res[t];
  for(i=0;i<t;i++)
  {
    ll n;
    ll u;
    ll v;
    cin>>n;
    vector<ll> adj[n+1];
    for(ll j=0;j<n-1;j++)
    {
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    vector<ll> val(n+1);
    for(ll j=1;j<=n;j++)
        {
          cin>>val[j];
        }
    vector<ll> m(n+1);
    bool visited[n+1];
    visited[0]=false;
    res[i].push_back(-1);
    for(ll j=1;j<=n;j++)
      {
              cin>>m[j];
              res[i].push_back(-1);
              visited[j]=false;
      }
    vll path;
    DFS(adj,res[i],visited,val,m,path,1);
    //sort(res[i].begin(),res[i].end());
  }
  for(i=0;i<t;i++)
  {
    for(ll j=0;j<res[i].size();j++)
      {if(res[i][j]!=-1)
        cout<<res[i][j]<<" ";
      }
    cout<<"\n";
  }
  return 0;
}
