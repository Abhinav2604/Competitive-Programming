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
	ll mat[3][3];
  ll i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
       cin>>mat[i][j];
  }
  mat[0][0]=(2*mat[2][0]+mat[2][1]-mat[0][1])/2;
  mat[2][2]=(2*mat[0][2]+mat[0][1]-mat[2][1])/2;
  mat[1][1]=(mat[0][0]+mat[0][1]+mat[0][2]-mat[1][0]-mat[1][2]);
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
       cout<<mat[i][j]<<" ";
    cout<<"\n";
  }
	return 0;
}
