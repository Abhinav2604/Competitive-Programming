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
     ll t,n;
     cin>>t;
     rep(i,t)
     {
     	string str;
     	cin>>str;
     	vll odd;
     	vll even;
     	ll oj,ej;
     	oj=0;ej=0;
     	vll res(str.size());
     	rep(j,str.size())
     	{
     		if((str[j]-'0')&1)
     		{
     			odd.pb((str[j]-'0'));
     		}
     		else
     			even.pb((str[j]-'0'));

     	}
     	rep(j,str.size())
     	{
             if(ej==even.size())
             {
             	repA(k,j,str.size()-1)
             	{
             		res[j]=((odd[oj]));
             		j++;
             		oj++;
             	}
             	break;
             }
              else if(oj==odd.size())
             {
             	repA(k,j,str.size()-1)
             	{
             		res[j]=(even[ej]);
             		j++;
             		ej++;

             	}
             	break;
             }
             else
             {
             	if(odd[oj]<even[ej])
             	{
             		res[j]=((odd[oj]));
             		oj++;
             	}
             	else
             	{
             		res[j]=((even[ej]));
             		ej++;
             	}
             }
     	}
     	rep(p,str.size())
     	   cout<<res[p];
     	   cout<<"\n";
      
     }
    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}