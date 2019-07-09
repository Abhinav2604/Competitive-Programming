#include <iostream>
#include<cmath>
using namespace std;
unsigned long int nChoosek( long int n, int k )
{
    if (k > n || k<0) return 0;
    if (k == 0 || k==n) return 1;
    if(2*k>n) k=n-k;

    unsigned long int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main(void)
{   int t,i;
    cin>>t;
    long int arrn[t],l;
    unsigned long int a,p,q,r;
    int arrk[t];
    for(i=0;i<t;i++)
    {
      cin>>arrn[i]>>arrk[i];
    }

    for(i=0;i<t;i++)
    { a=0;
      p=(3*arrn[i]*arrn[i]-14*arrn[i]+15)*(nChoosek((2*arrn[i]-4),(arrk[i]-4)));
      a=nChoosek(2*arrn[i],arrk[i])-(((3*arrn[i]-2)*(nChoosek((2*arrn[i]-2),(arrk[i]-2))))-((6*arrn[i]-8)*nChoosek(2*arrn[i]-3,arrk[i]-3))-p);
          cout<<(a%(long int)(pow(10,9)+7))<<endl;
      }
   return 0;
}
