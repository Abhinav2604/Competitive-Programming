#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
ll fn(int x){
	if(x==0)
		return 1;
	if(x==1)
		return 2;
	if(x%2==0){
		ll y=fn(x/2);
		return y*y;
	}
	return fn(x-1)*2;
}
int main(){
	fastio
	//fio
	ll n,l,r;
	cin>>n>>l>>r;
	ll x=n-l;
	ll y=fn(l)-1;
	y+=x;
	cout<<y<<' ';
	y=fn(r)-1;
	x=n-r;
	y=y+x*fn(r-1);
	cout<<y;
}