#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define loopi(n) for(ll i=0;i<n;i++)
#define loopd(n) for(ll i=n;i>0;--i)
#define fori(n) for(ll i=1;i<=n;i++)
#define ford(n) for(ll i=n;i>0;--i)
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
void DFS(unordered_set<ull> adj[],vector<ull> &dfs,vector<ull> &lvl,ull node,ull parent,ull pri,unordered_map<ull, ull> &umap)
{
  if(adj[node].find(parent)!=adj[node].end())
  {
    adj[node].erase(parent);
  }

  for(auto i=adj[node].begin();i!=adj[node].end();i++)
	 {

		 DFS(adj,dfs,lvl,*i,node,pri+1,umap);
	 }
    lvl.push_back(pri+1);
    dfs.push_back(node);
    umap.insert(mp(node,dfs.size()-1));

}
// void DFSUtil(unordered_set<ll> adj[],vector<ull> w,ull vertex,ull k,ull &m,ull &v,ull &xl)
// { ull min=(k^w[vertex]);
//   //cout<<"\nmin "<<min<<"\n";
// //  cout<<k<<"   "<<min<<" | ";
//   if(min > m)
//   { m=min;
//     xl=min;
//     //cout<<min<<" "<<m<<" | ";
//       v= vertex;
//   }
//   else if(min==m)
//   { xl=m;
//     if(v>vertex)
//        v=vertex;
//   }
//
//   for(auto i=adj[vertex].begin();i!=adj[vertex].end();i++)
// 	 {
//
// 		 DFSUtil(adj,w,*i,k,m,v,xl);
// 	 }
// }

int main()
{
  std::ios::sync_with_stdio(false);
  int t,i;
  cin>>t;
  for(i=0;i<t;i++)
  {
    ull n,q,b,x,y;
    cin>>n>>q;
    ull a;
    vector<ull> w;
    unordered_set<ull> adj[n+1];
    w.push_back(0);
    for(ull j=0;j<n;j++)
       {
         cin>>a;
         w.push_back(a);
       }
    for(ull j=0;j<n-1;j++)
    {
      cin>>x>>y;
      adj[x].insert(y);
      adj[y].insert(x);
    }
    adj[0].insert(1);
    vector<ull> dfs(n+2,0);
    vector<ull> lvl(n+2,0);
    dfs.push_back(0);
    lvl.push_back(0);
    unordered_map<ull, ull> umap(n+1);
    DFS(adj,dfs,lvl,1,0,0,umap);
    // for(ll j=1;j<=n;j++)
    // {
    //   for(auto it=adj[j].begin();it!=adj[j].end();++it)
    //       cout<<*it<<" w"<<w[*it]<<" ";
    //       cout<<"\n";
    // }
  //  cout<<w[1]<<"\n";
    x=y=0;
    a=b=0;
    ull v=0;
    ull xl=0;
    for(ull j=1;j<=q;j++)
    {
      cin>>a>>b;
      v=(a^v);
      xl=(b^xl);
      ull vl=v;
      ull k=xl;
      ull o=w[v]^k;
      ull c=umap[v];
      ull s=lvl[c];
      xl=o;
      for(ll z=c-1;z>=0;--z)
      {
        if(lvl[z]<=s)
           break;
        else
           {
             if((k^w[dfs[z]])>o)
             {
               o=(k^w[dfs[z]]);
               xl=o;
               vl=dfs[z];
               //cout<<o<<" ";
             }
             if((k^w[dfs[z]])==o)
             { xl=o;
               if(vl<=dfs[z])
                  vl=dfs[z];
             }
           }
      }
      v=vl;
      //cout<<"v "<<v<<" k "<<xl<<" ";
      //DFSUtil(adj,w,vl,k,o,v,xl);
      cout<<v<<" "<<xl<<"\n";
    }


  }
  return 0;
}
