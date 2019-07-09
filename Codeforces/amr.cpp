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
	ll r,x,y,x_,y_,a,b,c,d;
  long double e;
  cin>>r>>x>>y>>x_>>y_;
  a=abs(x-x_);
  b=abs(y-y_);
  d=a*a+b*b;

  e=(((double)(d))/((double)(4*(r*r))));
  e=ceil(sqrt(e));
  cout<<(ll)(e);

	return 0;
}
