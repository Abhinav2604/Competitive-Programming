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
	ll n,m,d,i,j,k=-1;
  ll ans=0;
  bool f=false;
  cin>>n>>m>>d;
  ll a[n*m];
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      cin>>a[i*m + j];
      if(f==false && k==-1)
        {k=a[i*m + j]%d;
          //f=true
          //cout<<k<<" ";
        }
      else{

          if((a[i*m+j]%d)!=k)
            f = true ;

          }

     }
  }

  //cout<<f<<"f ";
  if(f)
  {
    cout<<-1;
    return 0;
  }


    sort(a,a+n*m);
    k=n*m/2;
    k=a[k];
    //cout<<k;
    for(i=0;i<n*m;i++)
    {
      ans=ans+abs(k-a[i])/d;
    }
    cout<<ans;



	return 0;
}
