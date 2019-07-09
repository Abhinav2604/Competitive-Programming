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
	int n,k,i,j,l,t=0;
  int min=INT_MAX;
  int max=0;
  cin>>n>>k;
  int a[n];
  l=1;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]>max)
    {
      max=a[i];
    }
    if(a[i]<min)
    {
      min=a[i];
    }
  }
//cout<<min<<" "<<max<<" "<<k<<"\n";
  if((max-min)>k)
  {
    cout<<"NO";
    return 0;
  }
  if((max-min)<=k)
  {
    cout<<"YES\n";
    for(i=0;i<n;i++)
    { l=1;
      t=a[i];
      for(j=0;j<t;j++)
      {
        if(l<k)
        {
          cout<<l<<" ";
          l++;
        }
        else if(l==k)
        {
          cout<<l<<" ";
          l=1;
        }
      }
      cout<<"\n";
    }
  }
	return 0;
}
