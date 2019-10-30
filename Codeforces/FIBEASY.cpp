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
   //  fio;
    unsigned long long  t,n,k;
    vector<ll> fib(62,0);
    fib[0]=1;
    fib[1]=0;
    fib[2]=1;
    for(ll i=3;i<62;i++)
    {
       fib[i]=(fib[i-1]+fib[i-2])%10;
    }
    vector<unsigned long long> table;
    table.push_back(1);
    table.push_back(2);
    for(ll i=2;i<65;i++)
    {
    	table.push_back((2LL)*table[i-1]);
    }
   /*  for(ll i=2;i<65;i++)
    {
    	cout<<table[i]<<" ";
    }
    cout<<"\n";*/

    cin>>t;
   // cout<<"pp\n";
    for(ll i=0;i<t;i++)
    {
    	cin>>n;
    	k=n;
    	for(ll j=0;j<64;j++)
    	{
    		if(j==63)
    			k=table[63];
    		else if(n>=table[j] && n<table[j+1])
    			{k=table[j];
    				break;}
    	}
    	cout<<fib[k%60]<<"\n";

    }


    
    return 0;
}