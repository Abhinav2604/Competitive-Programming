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
  ll n,m,i,a,b,c;
  cin>>n>>m;
  int array[n+1]={ };
  for(i=0;i<m;i++)
  {
    cin>>a>>b>>c;
    if(array[a]>0)
    {
      if(array[a]==1)
      {
        array[b]=2;
        array[c]=3;
      }
      if(array[a]==2)
      {
        array[b]=1;
        array[c]=3;
      }
      if(array[a]==3)
      {
        array[b]=1;
        array[c]=2;
      }
    }
    else if(array[b]>0)
    {
      if(array[b]==1)
      {
        array[a]=2;
        array[c]=3;
      }
      if(array[b]==2)
      {
        array[a]=1;
        array[c]=3;
      }
      if(array[b]==3)
      {
        array[a]=1;
        array[c]=2;
      }
    }
    else if(array[c]>0)
    {
      if(array[c]==1)
      {
        array[a]=2;
        array[b]=3;
      }
      if(array[c]==2)
      {
        array[a]=1;
        array[b]=3;
      }
      if(array[c]==3)
      {
        array[a]=1;
        array[b]=2;
      }
    }
    else
    {
      array[a]=1;
      array[b]=2;
      array[c]=3;
    }
  }


  for(i=1;i<=n;i++)
  {
    cout<<array[i]<<" ";
  }
	return 0;
}
