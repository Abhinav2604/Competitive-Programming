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
#define MP make_pair
#define PB push_back
#define X first
#define Y second
using namespace std;

vll x_win;
vll y_win;

int main()
{
    fast;
    #ifndef ONLINE_JUDGE
     fio;
    #endif
     ll n,x,y;
     cin>>n>>x>>y;
     ll l_m;
     ll r_m;
     vll vec(n);
     rep(i,n)
       cin>>vec[i];
     rep(i,n)
     {  l_m=r_m=INT_MAX;
     	ll j=i;
     
     	for(j=i-1;j>=(i-x) && j>=0;j--)
     	{
              if(l_m>vec[j])
              	  l_m=vec[j];

     	}
     	
     	{   
     		for(j=i+1;j<=(i+y) && j<n;j++)
     		{
     			if(r_m>vec[j])
     				r_m=vec[j];
     		}
     		

     	}
     	if(l_m>vec[i] && r_m>vec[i])
     		{cout<<i+1;
     			break;
     		}


     }

    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}