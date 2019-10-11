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
    string s;
    bool last,rep;
    rep=last=false;
   
    cin>>s;
     char res[s.size()+1];
     res[0]=s[0];
     ll j=1;
    for(ll i=1;i<s.size();i++)
    {
          if(s[i]==s[i-1])
          {
          	res[j]=s[i];
          	j++;
          	while(s[i]==s[i-1])
          		i++;
          	res[j]=s[i];
          	j++;
          }
          else
          {
          	res[j]=s[i];
          	j++;

          }
    }
    res[j]='\0';
    char res2[j+1];
    res2[0]=res[0];
 ll k=j;
 j=1;
    for(ll i=1;i<k;i++)
    {
    	if(res[i]==res[i-1])
    	{
    		if(last==false)
    		{
    			last=true;
    			res2[j]=res[i];
    			j++;
    		}
    		else
    		{
    			last=false;
    		}
    	}
    	else
    		{  if(i<k-1 && (i-2)>=0 && res[i]==res[i+1] && res[i-1]!=res[i-2] )
    			    last=false;
    			res2[j]=res[i];
    			j++;
    		}
    }
    res2[j]='\0';
    cout<<res2;


    
    return 0;
}