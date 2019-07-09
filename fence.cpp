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
	int t,z;
	ll n,m,k,i,a,b,c=0;
	ll o=0;

   ll res[10]={};
	cin>>t;
	for(z=0;z<t;z++)
	{ c=0;
		ll r=c=0;
		vector<pll> pos;
		cin>>n>>m>>k;
		for(i=0;i<k;i++)
		{
			cin>>a>>b;
			pos.push_back(make_pair(a,b));
		}
	sort(pos.begin(),pos.end());
		unordered_map<ll,bool> prev,curr,fut;
		curr.clear();
		fut.clear();
		prev.clear();
		o=0;
		r=pos[0].f;
		for(i=0;i<k;i++)
		{

			if(r!=pos[i].f && o==0)
			   {
					 r=pos[i].f;
					 ++o;
					 i=i-1;
				 }
				 else if(o==1 && r==pos[i].f)
				 {
					 fut[pos[i].s]=true;
				 }
				 if(o>1)
				   break;
		 }
		 r=pos[0].f;
		for(i=0;i<k;i++)
		{
        if(r==pos[i].f)
				{

					   if(curr.find(pos[i].s-1)==curr.end())
						   { c=c+2 + (prev.find(pos[i].s)==prev.end()) + (fut.find(pos[i].s)==fut.end());
								// cout<<pos[i].f<<" "<<(fut.find(pos[i].s)==fut.end())<<" ";
							    }
							else
							 { c=c+ (prev.find(pos[i].s)==prev.end())+ (fut.find(pos[i].s)==fut.end());
								  //cout<<pos[i].f<<" "<<(fut.find(pos[i].s)==fut.end())<<" ";
							 }

						 curr[pos[i].s]=true;


				}
				else
				{//cout<<"\n";
					o=0;
					prev=curr;
					curr.clear();
					fut.clear();
					r=pos[i].f;
					for(ll l=i;l<k;l++)
					{
						if(r!=pos[l].f)
						{
							r=pos[l].f;
							l--;
							++o;
						}
						else if(o==1 && r==pos[l].f)
						{
							fut[pos[l].s]=true;
							//cout<<pos[l].f<<" "<<pos[l].s<<" ";
						}


						if(o>1)
						  break;

					}
					r=pos[i].f;
					i--;
				}

		}
		res[z]=c;

	}
//	cout<<"\n";
	for(z=0;z<t;z++)
	cout<<res[z]<<"\n";
	return 0;
}
