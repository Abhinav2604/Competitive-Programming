#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "
"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define loopi(n) for(ll i=0;i<n;i++)
#define loopd(n) for(ll i=n;i>0;--i)
#define fori(n) for(ll i=1;i<=n;i++)
#define ford(n) for(ll i=n;i>0;--i)
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
  return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,a;
    cin>>t;
    int ch[t];
    for(i=0;i<t;i++)
    { long int n,k,j,count;
      count =0;
      cin>>n>>k;
      int arry[n];
      for(j=0;j<n;j++)
      { cin>>arry[j];
        if(arry[j]>1)
          count++;
      }
      if(count>k)
      ch[i]=0;
      else
      ch[i]=1;
    }
    for(i=0;i<t;i++)
    {
      if(ch[i]==0)
      cout<<"NO\n";
      else
      cout<<"YES\n";
    }
    return 0;
  }
