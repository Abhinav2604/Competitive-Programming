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
#define cd complex<double>
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
const double PI = acos(-1);
struct candi{
	ll ans;
	ll alt;
	int l;
};
candi make_data(int l,ll val,ll alt)
{
	candi res;
	res.l=l;
	res.ans=val;
	res.alt=alt;

	return res;
}
candi  combine(candi &a, candi &b)
 {
       int l1=a.l;
       int l2=b.l;
       ll val = b.ans;
       ll alt=0;;
       val = b.alt*l1 + val;
       if(l1&1)
       {
       	   val=a.ans-val;
       	   alt=a.alt-b.alt;
       }
       else
      { 	
      		val=a.ans+val;
      		alt=a.alt+b.alt;
      }
       
       candi res= make_data(l1+l2,val,alt);
       return res;
 }

candi tre[8*100000];
void cr(int n)
{
	n++;
	n=4*n;
	rep(i,n)
	{
		tre[i]=make_data(0,0,0);
	}
}
void build(int arr[],int v,int tl,int tr)
{
	if(tl==tr)
	{
	    tre[v].l=1;
	    tre[v].ans=arr[tl];
	    tre[v].alt=arr[tl];
	}
   else{
	int mid=tl + (tr-tl)/2;
	build(arr,2*v,tl,mid);
	build(arr,2*v+1,mid+1,tr);
	tre[v] = combine(tre[2*v],tre[2*v+1]);
}
}

void update(int v, int tl, int tr, int pos, int new_val)
{
	if(tl==tr)
	{
		tre[v].ans=new_val;
		tre[v].alt=new_val;
		tre[v].l=1;
	}
	else{
		int mid=tl + (tr-tl)/2;
		if(pos<=mid)
			update(2*v,tl,mid,pos,new_val);
		else
			update(2*v+1,mid+1,tr,pos,new_val);
		tre[v]=combine(tre[2*v],tre[2*v+1]);

	}
}

candi query(int v, int tl, int tr, int l, int r)
{
	if(l>r)
		return make_data(0,0,0);
	if(tl==l && tr==r)
	{
		return tre[v];
	}
	int mid=(tl+tr)/2;
	candi a=query(2*v,tl,mid,l,min(r,mid));
	candi b=query(2*v+1,mid+1,tr, max(l,mid+1),r);
	//cout<<a.ans<<" "<<b.ans<<"\n";
	return combine(a,b);
}



int main()
{
    fast;
    // #ifndef ONLINE_JUDGE
    //  fio;
    // #endif
     ll t;
     cin>>t;
     rep(it,t)
     {
     	ll n,q;
     	cin>>n>>q;
     	int arr[n];
     	rep(i,n)
     	  cin>>arr[i];
        cr(n);
     	build(arr,1,0,n-1);
     	//cout<<"ex"<<endl;
     	ll ans=0;
     	rep(i,q)
     	{
     		char a;
     		int l, r;
     		cin>>a>>l>>r;
     		if(a=='Q')
     		{
     			candi e=query(1,0,n-1,l-1,r-1);
     			//cout<<e.ans<<" "<<e.l<<endl;
     			ans+=e.ans;
     		}
     		else{
     			update(1,0,n-1,l-1,r);
     			//cout<<"ex2"<<endl;
     		}
     		
     	}
     	cout<<"Case #"<<it+1<<": "<<ans<<"\n";
     }
    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}