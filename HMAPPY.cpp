#include <iostream>
#include<cmath>

unsigned long int nChoosek( long int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n)  k = n-k;
    if (k == 0) return 1;

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
    long int arrn[t];
    int arrk[t];
    for(i=0;i<t;i++)
    {
      cin>>aarn[i]>>arrk[i];
    }
    for(i=0;i<t;i++)
      cout<<((2*nChoosek(aar[i],aark[k]))%(pow(10,9)+7))<<endl;

   return 0;
}
