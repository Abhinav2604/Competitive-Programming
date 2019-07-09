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
	string s,t;
  ll sm[26]={};
  ll tm[26]={};
  cin>>s;
  cin>>t;


  ll s_len,t_len,i,j,f,tt=0;
  s_len=s.length();
  t_len=t.length();
  char x[t_len+1];
  for(i=j=0;s[i]!='\0';i++)
  {
    if(s[i]==t[j])
    {
      x[j]=s[i];
      j++;
    }
  }
  x[j]='\0';
  //cout<<x<<"\t";
  if(t.compare(x)==0)
  {
    cout<<"automaton";
    return 0;
  }
  if(t_len>s_len)
    {cout<<"need tree";
      return 0;
    }
  for(i=0;s[i]!='\0';i++)
  {
    ++sm[s[i]-'a'];
  }
  for(i=0;t[i]!='\0';i++)
  {
    ++tm[t[i]-'a'];
  }
  f=1;
  /*for(i=0;i<26;i++)
     cout<<tm[i]<<" ";
     cout<<"\n";
     for(i=0;i<26;i++)
        cout<<sm[i]<<" ";*/
  for(i=0;i<26;i++)
  {
    if(tm[i]<sm[i])
        {
          tt=sm[i]-tm[i];
          f=2;
        }
    if(tm[i]>sm[i])
      {cout<<"need tree";
       f=0;
       break;}

  }
  if(f==1)
    cout<<"array";
  else if(f==2)
    cout<<"both";
	return 0;
}
