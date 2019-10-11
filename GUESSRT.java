import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

public class GUESSRT {

	static class Reader 
    { 
        final private int BUFFER_SIZE = 1 << 16; 
        private DataInputStream di; 
        private byte[] buff; 
        private int bufferPoint, bytesRead; 
  
        public Reader() 
        { 
            di = new DataInputStream(System.in); 
            buff = new byte[BUFFER_SIZE]; 
            bufferPoint = bytesRead = 0; 
        } 
  
        public Reader(String file_name) throws IOException 
        { 
            di = new DataInputStream(new FileInputStream(file_name)); 
            buff = new byte[BUFFER_SIZE]; 
            bufferPoint = bytesRead = 0; 
        } 
  
        public String readLine() throws IOException 
        { 
            byte[] buf = new byte[1000001]; // line length 
            int cnt = 0, c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                    break; 
                buf[cnt++] = (byte) c; 
            } 
            return new String(buf, 0, cnt); 
        } 
  
        public int nextInt() throws IOException 
        { 
            int ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do
            { 
                ret = ret * 10 + c - '0'; 
            }  while ((c = read()) >= '0' && c <= '9'); 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public long nextLong() throws IOException 
        { 
            long ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public double nextDouble() throws IOException 
        { 
            double ret = 0, div = 1; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
  
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
  
            if (c == '.') 
            { 
                while ((c = read()) >= '0' && c <= '9') 
                { 
                    ret += (c - '0') / (div *= 10); 
                } 
            } 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        private void fillBuffer() throws IOException 
        { 
            bytesRead = di.read(buff, bufferPoint = 0, BUFFER_SIZE); 
            if (bytesRead == -1) 
                buff[0] = -1; 
        } 
  
        private byte read() throws IOException 
        { 
            if (bufferPoint == bytesRead) 
                fillBuffer(); 
            return buff[bufferPoint++]; 
        } 
  
        public void close() throws IOException 
        { 
            if (di == null) 
                return; 
            di.close(); 
        } 
    } 
	
	public static long power(long a,long b)
	{
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
	
	
	public static long pow(long a, long b, long MOD) {
		long x = 1, y = a;
		    while(b > 0) {
		        if(b%2 == 1) {
		            x=(x*y);
		            if(x>MOD) x%=MOD;
		        }
		        y = (y*y);
		        if(y>MOD) y%=MOD;
		        b /= 2;
		    }
		    return x;
		}
		 
		public static long InverseModulo(long a, long m) {
		    return pow(a,m-2,m);
		}
	
		public static long gcd(long A,long B)
		{
			if(B == 1 || A%B==0)
				return B;
			return gcd(B,A%B);
		}
		
	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub

		Reader s = new Reader();
		long T = s.nextLong();
		for(int t = 0;t<T;++t)
		{
			long N = s.nextLong();
			long K = s.nextLong();
			long M = s.nextLong();
			if(M%2 != 0)
			{
				long c = (M+1)/2;
				long P = power(N,c)-power(N-1,c);
				P = (P+1000000007)%1000000007;
				long Q = power(N,c);
				long HCF = gcd(P,Q);
				P = P/HCF;
				Q = Q/HCF;
				long Q2 = InverseModulo(Q,1000000007);
				System.out.println(P*Q2%1000000007);
			}
			else
			{
				long c = (M)/2;
				long P = (power(N,c)*(N+K))%1000000007-(power(N-1,c)*(N+K-1))%1000000007;
				P = (P+1000000007)%1000000007;
				long Q = (power(N,c)*(N+K))%1000000007;
				long HCF = gcd(P,Q);
				P = P/HCF;
				Q = Q/HCF;
				long Q2 = InverseModulo(Q,1000000007);
				System.out.println(P*Q2%1000000007);
			}
		}
		
	}

}
