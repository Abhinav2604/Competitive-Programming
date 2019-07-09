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
  ll n,i,b,red;
  b=red=0;
  cin>>n;
  ll r[n];
  for(i=0;i<n;i++)
  {
    cin>>r[i];
    r[i]=r[i]*r[i];
  }
  sort(r,r+n);
  for(i=0;i<n;i++)
  {if(i&1)
     b=b+r[i];
   else
     red=red+r[i];
   }
  cout<<fixed<<setprecision(7)<<(double)(3.1415926536*abs(b-red));
	return 0;
}
