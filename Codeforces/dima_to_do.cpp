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
	ll n,k,i,ab=INT_MAX,j=0,s=0,m=INT_MAX;


  cin>>n>>k;
    ll a[n]={};
  //ll aa[n/k]={};
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<k;i++)
  { s=0;

    for(j=i;j<n;j=j+k)
       s=s+a[j];


    if(s<=m)
    {
    //  cout<<s<<" ";
      //m=s;
      if(s<m)
         ab=i;
       m=s;
    }
  }

  cout<<ab+1;
	return 0;
}
