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
    #ifndef ONLINE_JUDGE
     fio;
    #endif

     ll t;
     cin>>t;
     rep(i,t)
     {
     	string str;
     	cin>>str;
     	ll n=str.size();
     	vll dp(n,0);
     	vll lps(n,0);
     	ll len=0;
     	ll p=1;
     	while(p<n)
     	{
            if(str[p]==str[len])
            {
            	len++;
            	lps[p]=len;
            	p++;
            }
            else
            {
            	if(len!=0)
            		len=lps[len-1];
            	else
            	{
            		lps[p]=0;
            		p++;
            	}
            }
     	}

     	
     	dp[0]=1;
     	ll j=0;
       // cout<<dp[0]<<" ";
     	repA(k,1,n-1)
     	{
            if(str[k/2]==str[k]  && lps[k]>=(k/2+1)  && k&1)
            	{ dp[k]=min(dp[k/2]+1,dp[k-1]+1);
            		//cout<<k<<" "<<min(dp[k/2]+1,dp[k-1]+1)<<"p\t";
            		
            		

            	}
             else
            	dp[k]=dp[k-1]+1;
            

            	//cout<<dp[k]<<" ";
            
     	}
     	//cout<<"\n";

     cout<<dp[n-1]<<"\n";
     }
    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}