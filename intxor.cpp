#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  int t,i,o;
  unsigned long long int n,j,a,b,c,d,e,f,g,x,y,z;
//  unsigned long long int ai[4]={};
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>n;
    unsigned long long int arr[n]={};
    unsigned long long int ai[8]={};

    cout<<1<<" "<<1<<" "<<2<<" "<<3<<"\n";
    cin>>ai[0];
    cout<<1<<" "<<3<<" "<<4<<" "<<5<<"\n";
    cin>>ai[1];
    cout<<1<<" "<<1<<" "<<2<<" "<<4<<"\n";
    cin>>ai[2];
    e=ai[0]^ai[1]^ai[2];
    cout<<1<<" "<<5<<" "<<6<<" "<<7<<"\n";
    cin>>ai[3];
    cout<<1<<" "<<3<<" "<<4<<" "<<6<<"\n";
    cin>>ai[4];
    f=e^ai[4]^ai[1];
    g=ai[3]^f^e;
    arr[4]=e;
    arr[5]=f;
    arr[6]=g;
    for(j=5;j<n-2;j++)
    {
        cout<<1<<" "<<j+1<<" "<<j+2<<" "<<j+3<<"\n";
        cin>>x;
        arr[j+2]=arr[j]^arr[j+1]^x;
    }
    cout<<1<<" "<<1<<" "<<n<<" "<<n-1<<"\n";
    cin>>y;
    arr[0]=arr[n-2]^arr[n-1]^y;
    cout<<1<<" "<<2<<" "<<n<<" "<<5<<"\n";
    cin>>y;
    arr[1]=arr[n-1]^arr[4]^y;
    arr[2]=ai[0]^arr[0]^arr[1];
    arr[3]=ai[2]^arr[0]^arr[1];
    cout<<2;
    for(j=0;j<n;j++)
    {
      cout<<" "<<arr[j];
    }
    cout<<"\n";
    cin>>o;
  //  cout<<"\n";
  }
  return 0;
}
