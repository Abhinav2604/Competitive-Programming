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
	ll n,i,c=0,a,b,len=0,k=0;
  cin>>n;
  ll fib[n]={};
  for(i=0;i<n;i++)
  {
    cin>>fib[i];

  }
  for(i=2;i<n;i++)
  {
    if(fib[i]==(fib[i-1]+fib[i-2]))
    {
      c++;
    }
    if(len<c)
    {
      len=c;
    }
      if(fib[i]!=(fib[i-1]+fib[i-2]))
        c=0;
   }
  if(len>0)
    {cout<<len+2;
      return 0;
    }
  else if(n>=2)
     {
       cout<<2;
       return 0;
     }
  else
  {
    cout<<1;
    return 0;
  }

	return 0;
}
