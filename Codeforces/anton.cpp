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
	ll n,a,i,b,x,j,bm,l,d,g;
  char s[100001];

  a=b=bm=l=i=d=0;
	l=-1;
   scanf("%s",&s);
  n=strlen(s);
	int num[n];

  for(i=0;i<n;i++)
	{
		num[i]=s[i]-'0';
	}
	a=num[n-1];
//  num.push_back(a);

  for(i=n-1;i>=0;i--)
	{
		if(num[i]%2==0 &&(num[i]<a))
		{
			l=i;
			bm=1;
		}
		else if(num[i]%2==0 && bm==0)
		{
			l=i;
			bm=1;
		}
	}

  if(l==-1)
  {
    cout<<-1;
  }
  else
  { i=1;
    int a=1;
    g=num[n-1];
    num[n-1]=num[l];
    num[l]=g;
		for(i=0;i<n;i++)
    		cout<<num[i];
  }
	return 0;
}
