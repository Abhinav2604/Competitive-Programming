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
int main(){
	fastio
	//fio
	int a1,a2,k1,k2,n,x,n1;
	cin>>a1>>a2>>k1>>k2>>n;
	if(k1<k2){
		swap(k1,k2);
		swap(a1,a2);
	}
	n1=n-a1*(k1-1)-a2*(k2-1);
	if(n1>0)
		x=n1;
	else
		x=0;
	cout<<x<<' ';
	x=min(n/k2,a2);
	n1=n-x*k2;
	if(n1!=0){
		int y=min(n1/k1,a1);
		n1-=(y*k1);
		x+=y;
	}
	cout<<x;
}