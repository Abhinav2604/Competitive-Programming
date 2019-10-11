import java.util.Scanner;

public class TEAMMATE {

	public static void merge(long arr1[], long arr2[],long arr[]){
	      int i1=0,i2=0,m=0;
	      for(m=0;m<(arr1.length+arr2.length);)
	      {
	          if(arr1[i1]<=arr2[i2])
	         {
	          arr[m]=arr1[i1];
	          i1++;
	            m++;
	         }
	         else
	          {
	          arr[m]=arr2[i2];
	          i2++;
	           m++;
	          }
	        if(i1==arr1.length||i2==arr2.length)
	        {
	        	break;
	        }
	      }
	      while(i1<arr1.length)
	      {
	        arr[m]=arr1[i1];
	        i1++;
	        m++;
	      }
	      while(i2<arr2.length)
	      {
	        arr[m]=arr2[i2];
	        i2++;
	        m++;
	      }
	      return;
		}
	
	static class pair{
		long fact;
		long factfull;
	}
	public static void mergeSort(long[] input){
			// Write your code here
	      if(input.length==1)
	        return;
	      int n1=input.length/2,i;
	      long arr1[]=new long[n1];
	      int n2=input.length-n1;
	      long arr2[]=new long[n2];
	      for(i=0;i<n1;++i)
	      {
	        arr1[i]=input[i];
	      }
	      for(int j=0;j<n2;++j)
	      {
	        arr2[j]=input[i];
	        i++;
	      }
	      mergeSort(arr1);
	      mergeSort(arr2);
	      merge(arr1,arr2,input);
		}
		
	public static pair fact(long n)
	{
		pair p=new pair();
		long ans=1;
		for(long i=1;i<=n;++i)
		{
			ans=ans*(i%1000000007);
			if(i==n/2)
			{
				p.fact=ans%1000000007;
			}
		}
		p.factfull=ans%1000000007;
		return p;
	}
	
	public static long power(long a,long b)
	{
		if(b==0)
		{
			return 1;
		}
		if(b==1)
		{
			return a %1000000007;
		}
		if(b%2==0)
		{
			long smallans=power(a,b/2);
			return (smallans*smallans)%1000000007;
		}
		else
		{
			long smallans=power(a,b/2);
			return (smallans*(smallans*a%1000000007)%1000000007)%1000000007;
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner s=new Scanner(System.in);
		long T=s.nextLong();
		for(int m=0;m<T;++m)
		{
			long N=s.nextLong();
			long S[]=new long[(int)N];
			for(int i=0;i<S.length;++i)
			{
				S[i]=s.nextLong();
			}
			mergeSort(S);
			long temp=S[0]; 
			long c=1;
			long ans=1;
			int flag=0;
			for(int i=1;i<S.length;++i)
			{
				if(S[i]==temp)
				{
					c++;
				}
				else
				{	
					if(c%2==0)
					{
						if(flag==1)
						{
							pair p=fact(c);
							ans*=(p.factfull*power(p.fact*power(2,(c/2)-1),1000000005))%1000000007;
							flag=1;
							temp=S[i];
							c=1;
						}
						else
						{
							pair p=fact(c);
							ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
							temp=S[i];
							c=1;
						}						
					}
					else
					{
						if(flag==1)
						{
							if((c-1)/2!=0)
							{
								pair p=fact(c);
								ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
								flag=0;
								temp=S[i];
								c=1;
							}
							else
							{
								pair p=fact(c);
								ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
								flag=0;
								temp=S[i];
								c=1;
							}
						}
						else
						{
							if((c-1)/2!=0)
							{
								pair p=fact(c);
								ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
								flag=1;
								temp=S[i];
								c=1;
							}
							else
							{
								pair p=fact(c);
								ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
								flag=0;
								temp=S[i];
								c=1;
							}
						}
					}
				}
			}
			if(c%2==0)
			{
				if(flag==1)
				{
					pair p=fact(c);
					ans*=(p.factfull*power(p.fact*power(2,(c/2)-1),1000000005))%1000000007;
				}
				else
				{
					pair p=fact(c);
					ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
				}
			}
			else
			{
				if(flag==1)
				{
					if((c-1)/2!=0)
					{
						pair p=fact(c);
						ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
					}
					else
					{
						pair p=fact(c);
						ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
						
					}
				}
				else
				{
					if((c-1)/2!=0)
					{
						pair p=fact(c);
						ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
					}
					else
					{
						pair p=fact(c);
						ans*=(p.factfull*power(p.fact*power(2,(c/2)),1000000005))%1000000007;
					}
				}
			}
			System.out.println(ans%1000000007);
		}
	}

}
