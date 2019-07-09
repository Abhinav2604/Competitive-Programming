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
	ll n,i,sum_f,sum_s,c_f,c_s,a,l=0,flag=0;
  char c;
  cin>>n;
  sum_f=sum_s=c_f=c_s=0;
  vector<ll> f;
  vector<ll> s;
  for(i=0;i<n;i++)
  {
    cin>>a;
    if(a>0)
    { l=1;
      f.push_back(a);
      ++c_f;
      sum_f=sum_f+a;
    }
    if(a<0)
    { l=2;
      s.push_back(-a);
      ++c_s;
      sum_s=sum_s+(-a);
    }
  }
 flag=0;
  if(sum_f>sum_s)
    { cout<<"first";
       return 0;}
  else if(sum_f<sum_s)
    {cout<<"second";
      return 0;}
  else if(sum_f==sum_s)
  {
    for(i=0;i<min(c_s,c_f);i++)
    {
      if(f[i]!=s[i])
         {
           flag=1;
           if(f[i]>s[i])
              c='f';
           else if(f[i]<s[i])
              c='s';
              break;
         }
     }

    if(flag==0)
    {
      if(c_f>c_s)
         c='f';
      if(c_f<c_s)
         c='s';
      if(c_f==c_s)
      {
        if(l==1)
          c='f';
        else
          c='s';
      }
    }

  }

  if(c=='f')
  {  cout<<"first";
    return 0;
  }
  else if(c=='s')
   {cout<<"second";
     return 0;}

	return 0;
}
