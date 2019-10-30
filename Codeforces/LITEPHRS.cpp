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
vector<ll> ff(5001);

set<char> vowels;
ll fact(ll f)
{  
	if(ff[f]!=0)
		return ff[f];
     
     ff[f]=(f*fact(f-1))%mod;
     return ff[f]%mod;
}
ll getPerm(ll v,ll c)
{
	if(v>c)
		return 0;
	if(v==0)
	{
		return fact(c);
	}
	if(v==c)
	{
		return (fact(c)*fact(v))%mod;
	}
	return (((((c*v)%mod)*(getPerm(v-1,c-1)%mod))%mod) + ((c*(getPerm(v,c-1)%mod))%mod))%mod;

}
int main()
{
    fast;
    //fio;
 ff[0]=1;
ff[1]=1;
ff[2]=2;
    string str;
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');

    ll n;
    ll v,c;
    v=c=0;
    cin>>n;
    cin>>str;
    //cout<<str;
    rep(i,n)
    {
    	if(vowels.find(str[i])!=vowels.end())
    	{
             v++;
    	}
    	else
    		c++;
    }
    //cout<<v<<" "<<c;
    if(v>c)
    	cout<<0;
    else
    {
    	cout<<getPerm( v, c);
    }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}