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
  int pf[26]={};
  int gf[26]={};
  int area=0,i=0;
	string paper;
  string garland;
  cin>>paper;
  cin>>garland;
  for(i=0;paper[i]!='\0';i++)
  {
    ++pf[paper[i]-'a'];
  }
  for(i=0;garland[i]!='\0';i++)
  {
      ++gf[garland[i]-'a'];
      if(pf[garland[i]-'a']==0)
         {
           cout<<-1;
            return 0;         }

  }
  for(i=0;i<26;i++)
  {
    area=area+min(pf[i],gf[i]);
  }
  cout<<area;
	return 0;
}
