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

ll bfind(ll pre[],ll l,ll r,ll t)
{// cout<<l<<" "<<r<<"\n";
  ll mid=(l+r)/2;
  if(l==r)
    return l;
    if(pre[l]>=t)
      return l;
  if(pre[mid+1]>=t && pre[mid-1]<t)
     {
       if(pre[mid+1]==t)
           return mid+1;
        if(pre[mid-1]<t && pre[mid]>t)
           return mid-1;
       if(pre[mid]<=t)
          return mid;
     }
  if(pre[mid]>t && pre[mid+1]>t)
     return bfind(pre,l,mid-1,t);
 if(pre[mid]<t && pre[mid-1]<t)
     return bfind(pre,mid+1,r,t);
}

int main()
{
	std::ios::sync_with_stdio(false);
	ll n,t,i,k,cty,r,pt,ans;
  r=pt=ans=0;
  cin>>n>>t;
  ll a[n],pre[n]={};
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    //pre[i]=pre[i-1]+a[i];
  }
  ll count=0;

  /*for(i=1;i<=n;i++)
  {
    k=bfind(pre,i,n,t+pre[i-1]);

    // cout<<"k"<<k<<" ";
    if(pre[k+1]<=(t+pre[i-1]))
        {
          k=k+1;
        }
    if(pre[k]>(t+pre[i-1]))
       --k;
  // cout<<"k"<<k<<" ";
    cty=k-i+1;
    if(cty>count)
      count=cty;
  }

  cout<<count;*/
  for (int l = 0; l < n; ++l) {
        while (r < n && pt + a[r] <= t) {
            pt += a[r];
            ++r;
        }
        ans = max(ans, r - l);
        pt -= a[l];
    }
    cout << ans << endl;


	return 0;
}
