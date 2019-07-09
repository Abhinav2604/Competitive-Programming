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
	ll n,i,a,b,c,d,e,f;
  a=b=c=d=e=f=0;
  cin>>n;
  ll arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
    if(a<=arr[i])
    {
      a=arr[i];
      if(e)
      {
        c++;
      }
    }
    else
    {
      if(e)
      {
        f=-1;
      }
      else
      {
        e=1;
        a=arr[i];
      }
    }
  }

  if(f==-1)
  cout<<-1;
  else
  {
    if(e==0)
      cout<<0;
    else if((e==1)&&(arr[0]>=arr[n-1]))
      cout<<c+1;
    else
      cout<<-1;
  }

	return 0;
}
