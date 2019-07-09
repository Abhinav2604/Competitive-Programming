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
  int n,m,i,j,c=0;
  char pig[11][11];
  for(i=0;i<11;i++)
    for(j=0;j<11;j++)
         pig[i][j]='.';

  cin>>n>>m;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        cin>>pig[i][j];

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(pig[i][j]=='P')
      {
        if(i>0 && pig[i-1][j]=='W')
        {
          ++c;
					//cout<<i<<" "<<j<<" "<<c<<"\n";
          pig[i-1][j]=='.';
        }
        else if((i<n-1) && pig[i+1][j]=='W')
        {
          ++c;
						//cout<<i<<" "<<j<<" "<<c<<"\n";
          pig[i+1][j]='.';
        }
        else if(j>0 && pig[i][j-1]=='W')
        {
          ++c;
						//cout<<i<<" "<<j<<" "<<c<<"\n";
          pig[i][j-1]='.';
        }
        else if((j<m-1) && pig[i][j+1]=='W')
				{
					++c;
						//cout<<i<<" "<<j<<" "<<c<<"\n";
					pig[i][j+1]='.';
				}
      }
    }
  }
/*	for(i=0;i<n;i++)
		{for(j=0;j<m;j++)
				cout<<pig[i][j];
			cout<<"\n";}*/

	cout<<c;

	return 0;
}
