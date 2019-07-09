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
int m,n,i,j,l,flag=1;
cin>>m>>n;
bool B[100][100];
bool r[100];
bool c[100];
bool F[100][100]={1};
bool t=0;
for(i=0;i<m;i++)
   r[i]=1;
for(i=0;i<n;i++)
    c[i]=1;
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
    {
      cin>>B[i][j];
      if(B[i][j]==0)
      {
        r[i]=0;
        c[j]=0;
      }
    }
}
/*for(i=0;i<m;i++)
cout<<r[i]<<" ";
cout<<"\n";
for(i=0;i<n;i++)
cout<<c[i]<<" ";
cout<<"\n";*/
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
    {
      F[i][j]=(r[i]&c[j]);
    }
  }

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      {
        if(B[i][j]==1)
        {
          t=0;
          
          for(l=0;l<m;l++)
          {
            t=t|F[l][j];
          }
          for(l=0;l<n;l++)
          {
            t=t|F[i][l];
          }

          if(t==0)
            { flag=0;
              break;
            }
        }
      }
      if(!flag)
         break;
    }
  if(!flag)
    cout<<"NO";
  else
  {
    cout<<"YES\n";
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          cout<<F[i][j]<<" ";
        }
        cout<<"\n";
      }

  }
	return 0;
}
