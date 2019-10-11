import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.*;
public class ARTBALAN {

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
	
	public static boolean isPrime(long N) {
		int flag = 0;
		for(int i =2;i<=Math.sqrt((double)N);++i)
		{
			if(N%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			return true;
		else
			return false;
	}
	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub

		Reader s = new Reader();
		long T = s.nextLong();
		for(int t =0 ; t<T ; ++t)
		{
			 int[] freq = new int[26];
			 int c = 0;
			 String str =s.readLine();
			 for(int i =0;i<str.length();++i)
			 {
				 if(freq[str.charAt(i)-65] == 0)
				 {
					 c++;
				 }
				 freq[str.charAt(i)-65]++;
			 }
			 long N = str.length();
			 Arrays.sort(freq);
			 if(isPrime(str.length()))
			 {
				 long ans1 = 0;
				 long ans2 = 0;
				 if(str.length()>26)
				 {
					 for(int i =24;i>=26-c;--i)
					 {
						 ans1 = ans1+freq[i];
					 }
					 ans2 = Long.MAX_VALUE;
				 }
				 else
				 {
					 for(int i =24;i>=26-c;--i)
					 {
						 ans1 = ans1+freq[i];
					 }
					 for(int i =25;i>=26-c;--i)
					 {
						 if(freq[i] != 0)
						 ans2 = ans2+(freq[i]-1);
					 }
				 }
				 System.out.println(Math.min(ans1,ans2));
			 }
			 else
			 {
				 long ans = Long.MAX_VALUE;
				 for(int i = 1;i<=N/2;++i)
				 {
					 if(N%i == 0)
					 {
						 long ans1;
						 long k = N/i;
						 if(k>26)
						 {
							 ans1 = Long.MAX_VALUE;
						 }
						 else
							 ans1 = 0;
						 if(k < c)
						 {
							 for(int j =25;j>=26-c;--j)
							 {
								 if(j<=25-(int)k)
								 {
									 ans1 = ans1+(freq[j]);
								 }
								 if(i<freq[j])
								 {
									 ans1=ans1+(freq[j]-i);
								 }
							 }
						 }
						 else
						 {
							if(ans1 == 0)
							{
								for(int j =25;j>=26-c;--j)
								{
									if(i<freq[j])
									{
										ans1=ans1+(freq[j]-i);
									}
								}
							}
						 }
//						 System.out.println(i + " : " + ans1);
						 ans = Math.min(ans, ans1);
					 }
				 }
				 long ans2 = 0;
				 for(int i =24;i>=26-c;--i)
				 {
					 ans2 = ans2+freq[i];
				 }
				 System.out.println(Math.min(ans, ans2));
			 }
		}
		
	}

}
