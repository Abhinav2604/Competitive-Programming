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
#define vvi vector <vi>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mod 1000000007
#define inf 1000000000000000001
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

vector<ll> vec;
vector<ll> tree;

void build_tree(ll n)
{   
	tree.resize(4*n+1);
	rep(i,4*n+1)
	 tree[i]=0;
	return ;	
}


void update_to_const(ll l ,ll r, ll ql, ll qr, ll index, ll up)
{
	if(r<ql || l>qr || l>r || ql>qr)
    	 return ;
    if(index>r || index<l)
    	return ;

	if(tree[index]==0)
    {   if(l==ql && r==qr)
    	   tree[index]=up;
    	else if(l==r && l>=ql && l<=qr)
    		tree[index]=up;    
    }

    ll mid=l+(r-l)/2;
	update_to_const(l,mid,ql,qr,2*index,up);
	update_to_const(mid+1,r,ql,qr,2*index+1,up);

    return ;
}

void get_query_to_const(ll l, ll r, ll ql, ll qr, ll index)
{
     if(r<ql || l>qr || l>r || ql>qr)
    	 return ;
    /*if(index>r || index<l)
    	return ;*/
	 if(l==r && l==ql)
    {
          cout<<tree[index]<<" ";
          return ;
    }
    
     ll mid=l+(r-l)/2;
	 get_query_to_const(l,mid,ql,qr,2*index);
	 get_query_to_const(mid+1,r,ql,qr,2*index+1);
	 return ;
}

int main()
{
    fast;
    fio;
    ll n,m;
    ll l,r,x;
    cin>>n>>m;
    build_tree(n);
    rep(i,m)
    {
       cin>>l>>r>>x;
       update_to_const(1,n,l,x-1,1,x);
       update_to_const(1,n,x+1,r,1,x);
    }

    rep(i,n)
    {
    	get_query_to_const(1,n,i+1,i+1,1);
    }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}