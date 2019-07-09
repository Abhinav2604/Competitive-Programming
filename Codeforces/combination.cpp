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
/*bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{   //cout<<"a"<<" ";
     if(a.second==b.second)
        return(a.first>=b.first);
    return (a.second > b.second);
}
/*bool sortby(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{// cout<<"b"<<" ";
    return (a.first >= b.first);
}*/
/*int main()
{
	std::ios::sync_with_stdio(false);
   ll n,i,j,a,b,sum=0,m=0;
   ll op=1;
   n=100;
   vector<pll> com;
   cin>>n;
   for(i=0;i<n;i++)
   {
     cin>>a>>b;
     com.push_back(mp(b,a));
     //cout<<i<<" ";
   }
  // cout<<"a\n";
   //sort(com.begin(),com.end(),sortby);
  /* for(i=0;i<n;i++)
     cout<<com[i].first<<" ";
     cout<<"\n";*/
   /*sort(all(com));
 //cout<<"b\n";
   /*for(i=0;i<n;i++)
     cout<<com[i].first<<" "<<com[i].second<<"\n";
     cout<<"\n";*/

   /*for(i=n-1;i>0 && op>0;--i)
   { //cout<<"c\n";

      //cout<<i<<"i\n"; cout<<"a\n";
      // sort(com.begin(),com.end(),sortby);
      //  cout<<"d\n";
      //cout<<"o";
        //cout<<"f\n";
          --op;
          sum=sum+com[i].f;
          op=op+com[i].s;
          //com.erase(com.begin());

     }
//cout<<"g\n";
   cout<<sum;
	return 0;
}*/
pair<int ,int>a[1010];
int ans=0,k=1,i,n;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i].second>>a[i].first;
	sort(a,a+n);
	for(i=n-1;i>=0&&k>0;i--)
	{
		ans+=a[i].second;
		k+=a[i].first-1;
	}
	cout<<ans<<endl;
	return 0;
}
