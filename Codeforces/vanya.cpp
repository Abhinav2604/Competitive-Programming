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
	long double l,k,h,p,ans;
  k=h=p=0.0;
  ll n,i;
  cin>>n>>l;
  long double arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  for(i=0;i<n-1;i++)
  {
    k=arr[i+1]-arr[i];
    if(k>h)
      h=k;
  }
  if((l-arr[n-1])>arr[0])
     p=(l-arr[n-1]);
  else
     p=arr[0];
  //long double ans;
  h=h+0.0000;
//  cout<<h<<"\t";
    ans=h/2.0;
//  cout<<ans;

//  ans=/2.0);

  if(p>ans)
  {
    ans= double(p);
  }
  cout<<fixed;
  cout<<setprecision(10);

  cout<<ans;
	return 0;
}
