#include<bits/stdc++.h>
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
#define f first
#define s second
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define pb(x) push_back(x)
using namespace std;
int main()
 {
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fio;
	//code
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
	    string str;
	    ll aCount=0;
	    ll bCount=0;
	    ll cCount=0;
	    cin>>str;

	    for(ll j=0;j<str.length();j++)
	    {
	       if(str[j]=='a')
	               aCount=aCount*2 +1;
	       else if(str[j]=='b')
	          bCount=2*bCount+aCount;
	       else if(str[j]=='c')
	          cCount=2*cCount+bCount;
	           
	    }
	    cout<<cCount<<"\n";
	}
	return 0;
}