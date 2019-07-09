#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,i,a,b;
  cin>>t;
  int arr[t];
  for(i=0;i<t;i++)
  {
    cin>>arr[i];
    --arr[i];
  }
  for(i=0;i<t;i++)
  {
    a=arr[i]/26;
    b=arr[i]%26;
    if(b<2)
    cout<<(long int)(pow(2,a)+0.5)<<" "<<0<<" "<<0<<endl;
    else if(b<10)
    cout<<0<<" "<<(long int)(pow(2,a)+0.5)<<" "<<0<<endl;
    else
    cout<<0<<" "<<0<<" "<<(long int)(pow(2,a)+0.5)<<endl;
  }
  return 0;
}
