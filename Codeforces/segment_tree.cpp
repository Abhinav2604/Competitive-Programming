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
vector<ll> vec;
vector<ll> tree;
vector<ll> lazy;

void build_tree_util(ll l, ll r, ll index);
void build_tree(ll n)
{
	tree.resize(4*n+1);
	lazy.resize(4*n+1);
	repA(i, 0, 4*n)
	{
		tree[i]=lazy[i]=0;
	}

     build_tree_util(1, n,1);
}
void build_tree_util(ll l, ll r, ll index)
{
    if(l>r)
    	 return ;
    if(l==r)
    {
    	tree[index]=vec[l];
    	return;
    }
    ll m=l+(r-l)/2;
    build_tree_util(l,m,2*index);
    build_tree_util(m+1,r,2*index+1);
    tree[index]=tree[index*2]+tree[index*2+1];
}

void update_val(ll l, ll r, ll ql, ll qr,ll index, ll up)
{   // doing the pending updates;
    if(lazy[index]!=0)
    {
    	tree[index]+=(r-l+1)*lazy[index];
    	if(l!=r)
    	{
    		lazy[index*2]+=lazy[index];
    		lazy[index*2+1]+=lazy[index];

    	}
    	lazy[index]=0;
    }

    if(r<ql || l>qr || l>r)
    	 return;
     // if the query segment covers entire current segment or more
	if(l>=ql && r<=qr)
	{
		tree[index]+=(r-l+1)*up;
		if(l!=r)
    	{
    		lazy[index*2]+=up;
    		lazy[index*2+1]+=up;

    	}
    	return ;
	}
	ll mid=l+(r-l)/2;
	update_val(l,mid,ql,qr,2*index,up);
	update_val(mid+1,r,ql,qr,2*index+1,up);

	tree[index]=tree[index*2]+tree[index*2+1];
}

void update_to_const(ll l ,ll r, ll ql, ll qr, ll index, ll up)
{
	if(lazy[index]!=0)
    {
    	tree[index]=(r-l+1)*lazy[index];
    	if(l!=r)
    	{
    		lazy[index*2]=lazy[index];
    		lazy[index*2+1]=lazy[index];

    	}
    	lazy[index]=0;

    }

    if(r<ql || l>qr || l>r)
    	 return;
     // if the query segment covers entire current segment or more
	if(l>=ql && r<=qr)
	{
		tree[index]=(r-l+1)*up;
		if(l!=r)
    	{
    		lazy[index*2]=up;
    		lazy[index*2+1]=up;

    	}
    	return ;
	}
	ll mid=l+(r-l)/2;
	update_val(l,mid,ql,qr,2*index,up);
	update_val(mid+1,r,ql,qr,2*index+1,up);

	tree[index]=tree[index*2]+tree[index*2+1];

}

ll get_query_to_const(ll l, ll r, ll ql, ll qr, ll index)
{

	 if(lazy[index]!=0)
    {
    	tree[index]=(r-l+1)*lazy[index];
    	if(l!=r)
    	{
    		lazy[index*2]=lazy[index];
    		lazy[index*2+1]=lazy[index];

    	}
    	lazy[index]=0;
    }
     if(r<ql || l>qr || l>r)
    	 return 0;

    if(l>=ql && r<=qr)
    	return tree[index];
	

	ll mid=l+(r-l)/2;
	 return (get_query_to_const(l,mid,ql,qr,2*index) + get_query_to_const(mid+1,r,ql,qr,2*index+1));
}

ll get_query(ll l, ll r, ll ql, ll qr, ll index)
{
	 if(lazy[index]!=0)
    {
    	tree[index]+=(r-l+1)*lazy[index];
    	if(l!=r)
    	{
    		lazy[index*2]+=lazy[index];
    		lazy[index*2+1]+=lazy[index];

    	}
    	lazy[index]=0;
    }
     if(r<ql || l>qr || l>r)
    	 return 0;

    if(l>=ql && r<=qr)
    	return tree[index];
	

	ll mid=l+(r-l)/2;
	 return (get_query(l,mid,ql,qr,2*index) + get_query(mid+1,r,ql,qr,2*index+1));
}



int main()
{
    fast;
    fio;
    ll n,a;
    cin>>n;
    vec.pb(0);
    rep(i,n)
    {
        cin>>a;
        vec.pb(a);
    }
    build_tree(n);
    rep(i,4*n+1)
    {   if(tree[i]!=0)
    	cout<<tree[i]<<" ";
    }
    cout<<"\n";
    ll k;
    cin>>k;
    ll b,c,d;
    rep(i, k)
    {
    	cin>>a;
    	if(a==1)
    	{
    		cin>>b>>c>>d;
    		update_to_const(1,n,b,c,1,d);
    	}
    	else if(a==2)
    	{
    		cin>>a>>b;
    		cout<<get_query_to_const(1,n,a,b,1)<<"\n";
			
    	}
    }



    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}