#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    fast;
   // fio;

ll n,m,k;
	cin>>n>>m>>k;
	vector<pair<ll,ll>> points;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			points.push_back({i,j});
		}

		if(i<n)
		{
			i++;
			for(ll j=m;j>0;j--)
		{
			points.push_back({i,j});
		}

		}
	}

	ll s=points.size();
	ll ss=s;
	s=s/k;
	ll j=0;
	for(ll i=0;i<k;i++)
	{
		if(i==(k-1))
		{  j=i*s;
			cout<<(ss-(k-1)*s)<<" ";
           while(j<ss)
           {
           	cout<<points[j].first<<" "<<points[j].second<<" " ;
           	j++;
           }
           cout<<"\n";
		}
		else
		{
			cout<<s<<" ";
			j=i*s;
			while(j<(i+1)*s)
			{

           	cout<<points[j].first<<" "<<points[j].second<<" ";
           	j++;
          
			}
			cout<<"\n";
		}
	}

    
    return 0;
}