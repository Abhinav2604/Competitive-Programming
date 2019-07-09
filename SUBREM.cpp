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
void DFS(bool visited[],ll val[],vector<ll> adj[], ll node,ll parent,ll x)
{
	visited[node]=true;
	for(auto i=adj[node].begin();i!=adj[node].end();i++)
	 {
		 if(!visited[*i])
		 DFS(visited,val,adj,*i,node,x);
	 }
	 if((-val[node])>x)
	    val[parent]=val[parent] - x;
	 else
	   val[parent]=val[parent] + val[node];


		 //cout<<val[parent]<<" parent "<<parent<<" node "<<node<<" "<<val[node]<<"\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	int t,i;
	ll n,x,j,u,v,l,z,value;
	vector<ll> res;
	cin>>t;

	for(i=0;i<t;i++)
	{ ll min;
		value=0;
		cin>>n>>x;
	  ll val[n+1];
		vector<ll> adj[n+1];
		val[0]=0;
		for(j=1;j<=n;j++)
		  { cin>>val[j];
			}

		for(j=0;j<n-1;j++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
    bool visited[n+1];
		for(j=0;j<n+1;j++)
		   visited[j]=false;

		DFS(visited,val,adj,1,0,x);
		res.push_back(val[0]);
	}
	for(i=0;i<t;i++)
	cout<<res[i]<<"\n";
	return 0;
}
