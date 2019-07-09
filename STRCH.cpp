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
	int T;
	cin>>T;
  ll n,i,j;
  string s;
  char x;
  ll res[T]={  };
	// cin.ignore(); must be there when using getline(cin, s)

	for(ll k=0;k<T;k++)
  {   cin>>n;
     cin>>s;
     cin>>x;
     for(i=0,j=0;j<n;j++)
     {
       if(s[j]==x || j==(n-1))
       {
         if(s[i]==x)
         { if(j!=n-1)
           {
             res[k]=res[k]+(i+1)*(j-i);
            }
           else
             {
               if(s[j]==x)
                  res[k]=res[k]+(i+1)*(j-i)+(j+1);
                else
                  res[k]=res[k]+(i+1)*(j-i+1);
             }
           i=j;
         }
         else if(s[j]==x && j==(n-1))
         {
           res[k]=res[k]+(j+1);
         }
         else if(s[j]==x)
            i=j;
       }
     }
   }
	for(ll k=0;k<T;k++)
  cout<<res[k]<<"\n";
	return 0;
}
