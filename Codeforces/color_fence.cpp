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
#define vvi vector < vi >                 bohot hi lamba solution try optimizing the solution
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
bool mycomp(const pll &a,const pll &b)
{
  if(a.f==b.f)
     return (a.s>b.s);
  else
    return (a.f<b.f);
}
int main()
{
	std::ios::sync_with_stdio(false);
	ll v,i,j,fi=0,a=0;
  ll k=1;
  ll fre[10]={ };
  string str;
  vector<pll> p;
  cin>>v;
  for(i=1;i<=9;i++)
  {
    cin>>a;
    p.push_back(mp(a,i));
    //cout<<p[i].f<<" "<<p[i].s<<"\n";
  }
  /*  for(i=1;i<=9;i++)
  cout<<p[i].f<<" "<<p[i].s<<"\n";*/
  sort(p.begin(),p.end(),mycomp);

  /*for(i=1;i<=9;i++)
  {
    cout<<p[i-1].f<<" "<<p[i-1].s<<"\n";
  }*/
  i=0;
  if(v==0)
     {cout<<-1;
        return 0;
      }
  while(v>0)
  {  // k=0;
      a=p[0].f;
      if(a>v)
        {
          if(str.size()==0)
          {
            cout<<-1;
            return 0;
          }
          else
          { i=0;
            v=v+a;
            for(j=1;j<9;j++)
            {
              if(v>=p[j].f && p[i].s<p[j].s)
                   {
                     str[str.size()-k]=(char)(p[j].s+'0');
                     i=j;

                   }

              }
            v=v-p[i].f;
            ++k;
            if(k>str.size())
               break;
          }
        //  cout<<str<<" "<<cp<<" ";
           }
      else
       {
         v=v-a;
         //cout<<p[i].s<<" ";
         str=str+(char)(p[0].s+'0');
        // cp=str;
        //cout<<str;
       }
  }
  //cout<<str<<" ";
char cp[str.size()+1];
//ll j=0;
for(i=str.size()-1;i>=0 ;i++)
{
    cp[str.size()-i-1]=str[i];
}
  cout<<cp;
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int v,i,a[9],j,k=1000005;cin>>v;
	for(i=0;i<9;i++)
	{
		cin>>a[i];k=min(k,a[i]);
	}
	j=v/k;                                       // to keep track of total number of digit
	if(j==0){cout<<"-1";return 0;}
	while(j--)
	{
		for(i=8;i>=0;i--)
		{
			if((v-a[i])/k==j&&v>=a[i])
			{  cout<<i+1;v=v-a[i];break;}
		}
	}
}*/
