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
#define N ((2*100000)+1)
#define MAXN 4*N
using namespace std;
int arr[N];
int tree[MAX];
int lazy[MAX];

/**
 * Build and init tree
 */
void build_tree(long long int node,long long int a, long long int b) {
  	if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(long long int node,long long int a,long long int b,long long int i,long long int j,long long int value) {
  
  	if(lazy[node] != 0) { // This node needs to be updated
   		tree[node] += lazy[node]; // Update it

		if(a != b) {
			lazy[node*2] += lazy[node]; // Mark child as lazy
    			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}

   		lazy[node] = 0; // Reset it
  	}
  
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a >= i && b <= j) { // Segment is fully within range
    		tree[node] += value;

		if(a != b) { // Not leaf node
			lazy[node*2] += value;
			lazy[node*2+1] += value;
		}

    		return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
long long int query_tree(long long int node,long long int a,long long int b,long long int i,long long int j) {
	
	if(a > b || a > j || b < i) return -inf; // Out of range

	if(lazy[node] != 0) { // This node needs to be updated
		tree[node] += lazy[node]; // Update it

		if(a != b) {
			lazy[node*2] += lazy[node]; // Mark child as lazy
			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}

		lazy[node] = 0; // Reset it
	}

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];

	long long int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	long long int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	long long int res = max(q1, q2); // Return final result
	
	return res;
}

int main()
{
    fast;
    fio;
    build_tree(1, 0, N-1);
    ll q,l ,r,x,k;
    cin>>q;
    rep(i,q)
    {
         cin>>k;
         if(k==1)
         {
         	cin>>l>>r>>d;
         	ll u=query_tree(1,0,N-1,l,r);
         	update_tree(1,0,N-1,l,r,);
         }
    }
  
    // Build segment tree from given array 
    
  
    // Print max of values in array 
    // from index 1 to 3 
    cout << "Max of values in given range = " 
         << getMax(st, n, 1, 3) << endl; 
  
    // Update: set arr[1] = 8 and update 
    // corresponding segment tree nodes. 
    updateValue(arr, st, 0, n - 1, 1, 8, 0); 
  
    // Find max after the value is updated 
    cout << "Updated max of values in given range = " 
         << getMax(st, n, 1, 3) << endl; 
      
    return 0; 
 


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}