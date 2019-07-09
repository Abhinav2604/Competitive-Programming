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
vector<ll> v;
	int T,t;

	cin>>T;
  t=T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
    int n,i,l,f=0,g=0,c=0;
    string s;
    cin>>n;
    cin>>s;
		l=s.size();
    for(i=0;s[i]!='\0';i++)
    {
			if(s[i]=='>')
			   f=1;
      if(s[i]=='<' && !f && !g)
         {if(s[i+1]!='\0'  && s[i+1]=='>')
             ++c;
					    g=1;}
			else if(c && s[i]=='<')
			        --c;
    }
    v.push_back(c);
	}

  for(int i=0;i<t;i++)
  {
    cout<<v[i]<<"\n";
  }
	return 0;
}
