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
	std::ios::sync_with_stdio(false);
	ll n,i=0;
  long double xi,yi,x,y;
  pll p;
  ll m=1e9;
  unordered_map<long double,int> umap;
  cin>>n>>x>>y;
  for(;i<n;i++)
  {
    cin>>xi>>yi;
    //p=mp()
    if((yi-y)==0)
    { if(umap.find(m)==umap.end())
          {umap.insert(mp(m,1));
          //  cout<<m<<" ";
          }
    }
    else
    {
      if(umap.find((double)((xi-x)/(yi-y)))==umap.end())
            { umap.insert(mp(((double)((xi-x)/(yi-y))),1));
              // cout<<((double)((xi-x)/(yi-y)))<<" ";
             }
    }
  }

  cout<<umap.size();
	return 0;
}
