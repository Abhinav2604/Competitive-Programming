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
  ll n,m,i,j;
  cin>>n>>m;
  ll ar[n][m];
  unordered_set<ll> se[n];
  vector<pair<ll,ll>> a[1023];
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
       {cin>>ar[i][j];
         if(se[i].find(ar[i][j])!=se[i].end())
         {
           se[i].insert(ar[i][j]);
           a[ar[i][j]].push_back(make_pair(i,j));
         }
       }
  }
  for(i=0;i<1024;i++)
  {
    if(a[i].size()&1)
       {
         for(j=0)
       }
  }
  return 0;
}
