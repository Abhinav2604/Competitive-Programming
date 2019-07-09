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
	int d,sum,minsum,maxsum,i,mi,max;
  sum=minsum=maxsum=0;
  vector<pair<int,int>> sch;
  vector<int> schd;
  cin>>d>>sum;
  for(i=0;i<d;i++)
  {
     cin>>mi>>max;
     minsum=minsum+mi;
     maxsum=maxsum+max;
     sch.push_back(make_pair(mi,max));
  }

  if(minsum<=sum && maxsum>=sum)
  {
    cout<<"YES\n";
    for(i=0;i<d;i++)
    {
      schd.push_back(sch[i].first);
      sum=sum-sch[i].first;
    }
    if(sum>0)
    {
      for(i=0;i<d;i++)
      {
        if(schd[i]<sch[i].second  && sum>0)
        {
          sum=sum+sch[i].first;
          schd[i]=min(sch[i].second,sum);
          sum=sum-sch[i].second;
        }
      }
    }

    for(i=0;i<d;i++)
    cout<<schd[i]<<" ";

    return 0;
  }

  else
     cout<<"NO";

	return 0;
}
