#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#include<algorithm>
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
	ll n,m,i,c=0,k=0;
  cin>>n>>m;
  ll a[n];
  ll b[m];
  for(i=0;i<n;i++)
     cin>>a[i];
  for(i=0;i<m;i++)
    cin>>b[i];
  for(i=0;i<m;i++)
  {
    if(b[i]>=a[k])
       {
         ++c;
         k++;
       }
  }
  if(n-c>0)
    {cout<<n-c;
      return 0;
    }
  else
    {cout<<0;
      return 0;
    }
	return 0;
}
