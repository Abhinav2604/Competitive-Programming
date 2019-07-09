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
	ll n,m,k,i,x,y;
  unordered_map<ll,pll> umap;
  ll array[2001][2001]={0};
  cin>>n>>m>>k;
  for(i=0;i<k;i++)
  {
    cin>>x>>y;
    if(array[x][y]==0)
    {
      array[x][y]=i+1;
      umap.insert(mp(i+1,mp(x,y)));
    }
    else
    {
      for(j=1;j;j++)
      {
        if(array[x-j][y]==0)
        {
          array[x-j][y]=i+1;
          umap.insert(mp(i+1,mp(x-j,y)));
        }
        
      }
    }

    }

  }

	return 0;
}
