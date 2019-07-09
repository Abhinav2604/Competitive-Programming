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
	ll x_freq[100009]={};
  ll y_freq[100009]={};
  ll n,i,p,q,x,y;
  vector<pair<ll,ll>> kit;
  vector<pair<ll,ll>> res;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>x>>y;
    kit.push_back(make_pair(x,y));
    ++x_freq[x];
    ++y_freq[y];
  }
for(i=0;i<n;i++)
{
  x=kit[i].first;
  y=kit[i].second;
  p=x_freq[y];
  q=n-1-p;
  p=p+n-1;
  res.push_back(make_pair(p,q));
}

for(i=0;i<n;i++)
{
  cout<<res[i].first<<" "<<res[i].second<<"\n";
}

	return 0;
}
