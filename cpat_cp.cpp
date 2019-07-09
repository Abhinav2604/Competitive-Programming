#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long int n,k,i,a=0;
  cin>>n>>k;
  unsigned long int arr[n]={ };
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  a=k;
  unsigned long int f=0;
  for(i=0;i<n;i++)
  {
    f=f+arr[i];
    if(f>k)
      a=i;
    else if(f==k)
       a=i-1;
  }
  cout<<a<<"\n";
  return 0;
}
