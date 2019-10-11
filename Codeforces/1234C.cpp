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
    ll q;
    cin>>q;
    for(ll k=0;k<q;k++)
    {
    	ll n;
    	cin>>n;

    	string a[3];
    	cin>>a[0];
    	cin>>a[1];
    	
          if(a[0][0]=='1')
          	a[0][0]='2';
          else if(a[0][0]!='1' && a[0][0]!='2')
          	a[0][0]='4';
          ll j,i=0;
          ll o=0;
    	for(j=0;j<a[0].size();j++)
    	{        //cout<<"op\t";
               if(a[i][j]=='2')
               {
               	if(((j+1)<n)&&( a[i][j+1]=='1' || a[i][j+1]=='2'))
               		a[i][j+1]='2';
               	else if(i==0 && (j+1)<n)
               		a[i][j+1]='4';
               	else if(i==1 && (j+1)<n)
               	  	a[i][j+1]='5';
               }
               else if(a[i][j]=='4')
               	{    i++;
               		i=i%2;
               		if(a[i][j]=='1' || a[i][j]=='2')
               			{cout<<"NO\n";
               		        o=1;
               		      break;}
               	    a[i][j]='6';
               	    if(( (j+1)<n) &&(a[i][j+1]=='1' || a[i][j+1]=='2'))
               	    {
               	    	a[i][j+1]='2';
               	    }
               	    else if( (j+1)<n)
               	    a[i][j+1]='5';
               	}
               	else if(a[i][j]=='5')
               	{
               		i++;
               		i=i%2;
               		if(a[i][j]=='1' || a[i][j]=='2')
               		{ cout<<"NO\n";
               	o=1;
               		      break;
               		  }
               		 a[i][j]='3';
               	    if(( (j+1)<n)&&(a[i][j+1]=='1' || a[i][j+1]=='2'))
               	    {
               	    	a[i][j+1]='2';
               	    }
               	    else if( (j+1)<n)
               	        a[i][j+1]='4';

               	}
               	else if(a[i][j]=='3')
               	{

               	    if(( (j+1)<n)&&(a[i][j+1]=='1' || a[i][j+1]=='2'))
               	    {
               	    	a[i][j+1]='2';
               	    }
               	    else if( (j+1)<n)
               	        a[i][j+1]='4';
               	}
               	else if(a[i][j]=='6')
               	{
               		if(( (j+1)<n)&&(a[i][j+1]=='1' || a[i][j+1]=='2'))
               	    {
               	    	a[i][j+1]='2';
               	    }
               	    else if( (j+1)<n)
               	        a[i][j+1]='5';
               	}
               
    	}

    	if(j==a[0].size()  && i==1 && (a[i][j-1]=='2' || a[i][j-1]=='6') )
    		  cout<<"YES\n";
    		else if(o==0)
    			cout<<"NO\n";
    }


    
    return 0;
}