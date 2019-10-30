#include <bits/stdc++.h>
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    fast;
    //fio;
    int t;
    cin>>t;
    for(int ai=0;ai<t;ai++)
    {
        long long int n,k;
        cin>>n>>k;
        k=k-1LL;
        long long int *arr=new long long int[n];
        for(long long int i=0;i<n;i++)
         cin>>arr[i];
        long long int p=k/n;
        k=k%n;
        p=p%3;
        for(long long int i=0;i<p;i++)
        {
            for(long long int j=0;j<n;j++)
             arr[j]=(arr[j]^arr[n-j-1]);
        }
        for(long long int i=0;i<=k;i++)
          arr[i]=(arr[i]^arr[n-1-i]);

        for(long long int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         delete[] arr;
         cout<<endl;
    }
    return 0;
}