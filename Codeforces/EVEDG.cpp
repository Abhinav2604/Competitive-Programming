#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(long long int i=0;i<(n);++i)
#define repA(i,a,n) for(long long int i=a;i<=(n);++i)
#define repD(i,a,n) for(long long int i=a;i>=(n);--i)
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

int main()
{
    fast;
   // fio;
    ll t,m,n;
    cin>>t;
    rep(i,t)
    {  vector<ll> vec(100001,0);

       cin>>n>>m;
       vector<ll> vl[n+1];
       ll u,v;
       rep(j,m)
       {
          cin>>u>>v;
          vec[u]++;
          vec[v]++;
          vl[u].pb(v);
          vl[v].PB(u);

       }
       if(m&1)
       {
       	ll res=0;
       	ll fi=0;
       	repA(k,1,n)
       	{
       		if(vec[k]&1)
       		{
                res=k;
                break;
       		}
       		if(fi==0 && vec[k]>0)
       		{
       			fi=k;
       		}
       	}

       	if(res!=0)
       { 	
      	cout<<2<<"\n";
       	repA(p,1,n)
       	{
       		if(p==res || vec[p]==0)
       			cout<<2<<" ";
       		else
       			cout<<1<<" ";
       	}
       }

       else
       {
       	cout<<3<<"\n";
        res=vl[fi][0];
        repA(p,1,n)
       	{
       		if(p==res || vec[p]==0)
       			cout<<2<<" ";
       		else if(p==fi)
       			cout<<3<<" ";
       		else
       			cout<<1<<" ";
       	}
       }
       	cout<<"\n";
       }
       else
       {
       	cout<<1<<"\n";
       	repA(y,1,n)
       	cout<<1<<" ";
       	cout<<"\n";
       }
      
    }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}