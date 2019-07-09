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
	ll t,n,m,j,c,l,k,ct;
  int a,e,i,o,u;

  //vector<string> dd;
  //string d;
  ll comb[25]={};
  cin>>t;
  for(m=0;m<t;m++)
  { c=l=ct=0;
    a=e=i=o=u=0;
    cin>>n;
    string d[n],p;
    comb[0]=n;
    for(j=0;j<n;j++)
    { a=e=i=o=u=0;
      l=0;
      cin>>p;
      d[j]=p;
      l=strlen(p);
      for(k=0;k<l;k++)
      {
        if('a'==p[k])
        {
          if(!a)
            ++a;
        }
        else if('e'==p[k])
        {
          if(!e)
            ++e;
        }
      else  if('i'==p[k])
        {
          if(!i)
            ++i;
        }
      else  if('o'==p[k])
        {
          if(!o)
            ++o;
        }
      else  if('u'==p[k])
        {
          if(!u)
            ++u;
        }
      }

      ct=j+1;
      if(a)
         --ct;
      if(e)
       --ct;
      if(i)
        --ct;
      if(o)
         --ct;
      if(u)
        --ct;

      if(a&e)
        ++ct;
      if(a&i)
        ++ct;
      if(a&o)
        ++ct;
      if(a&u)
          ++ct;
      if(i&e)
          ++ct;
      if(o&e)
          ++ct;
      if(u&e)
            ++ct;
      if(i&o)
              ++ct;
      if(i&u)
              ++ct;
      if(o&u)
              ++ct;

    if(a&e&i)
    --ct;
    if(a&e&o)
    --ct;
    if(a&e&u)
    --ct;
    if(a&u&i)
    --ct;
    if(a&o&i)
    --ct;
    if(a&o&u)
    --ct;
    if(o&e&i)
    --ct;
    if(u&e&i)
    --ct;
    if(i&o&u)
    --ct;
    if(e&o&u)
    --ct;


    if(a&e&i&o)
    ++ct;
    if(a&u&i&o)
    ++ct;
    if(a&e&u&o)
    ++ct;
    if(a&e&i&u)
    ++ct;
    if(u&e&i&o)
    ++ct;



    }

  }


	return 0;
}
