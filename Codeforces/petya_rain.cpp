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
#define mem(a,val) memset(a,val,sizeof(a))    //itni man_marziyaan kyu??
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	ll n,min_1,min_2,len,i;
  min_1=min_2=len=0;
  cin>>n;
  ll a[n]={ };
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=1;i<n;i++)
  {
    if(a[i]<a[i-1] && ((i==n-1) || (a[i]<=a[i+1])))
        { //cout<<'i'<<" ";
          min_2=i;
          if(min_2-min_1>len)
            len=min_2-min_1;
            min_1=min_2;
        }
  }

   if(((n-1)-min_2)>len)
       len=n-1-min_2;

	if(min_2==0)
	   len=n-1;
  cout<<len+1;
	return 0;
}
