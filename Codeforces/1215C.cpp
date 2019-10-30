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
int main()
{
    fast;
    //fio;
    string str,tr;
    ll y;
    cin>>y;
    cin>>str>>tr;
    vll a;
    vll b;
    for(ll i=0;i<str.size();i++)
    {
        if(str[i]!=tr[i])
        {
        	if(str[i]=='a')
        	{
        		a.pb(i+1);
        	}
        	else
        	{
        		b.pb(i+1);
        	}
        }
    }

    ll n=a.size();
    ll m=b.size();
    
    	if(m%2==0 && n%2==0)
    	{
    		cout<<(m+n)/2<<"\n";
    		for(ll i=0;i<m;i=i+2)
    		{
    			cout<<b[i]<<" "<<b[i+1]<<"\n";
    		}
    		for(ll i=0;i<n;i=i+2)
    		{
    			cout<<a[i]<<" "<<a[i+1]<<"\n";
    		}
    	}
    	else if(m&1==1 && n&1==1 && (m>0 || n>0))
    	{
    		cout<<((m+n-2)/2)+2<<"\n";
    		for(ll i=0;i<m-1;i=i+2)
    		{  if(i!=m-1)
    			cout<<b[i]<<" "<<b[i+1]<<"\n";
    		}
    		for(ll i=0;i<n-1;i=i+2)
    		{  if(i!=n-1)
    			cout<<a[i]<<" "<<a[i+1]<<"\n";
    		}
    		cout<<a[n-1]<<" "<<a[n-1]<<"\n";
    		cout<<a[n-1]<<" "<<b[m-1]<<"\n";
    	}
    	else
    	{
    		cout<<-1;
    	}
    



    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}