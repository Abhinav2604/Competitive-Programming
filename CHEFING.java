import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;

public class CHEFING {

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
            byte[] buf = new byte[220]; // line length 
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
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub

		Reader s = new Reader();
		long T = s.nextLong();
		for(int t = 0;t<T;++t)
		{
			int N = s.nextInt();
			int freq[][] = new int[(int)N][26];
			for(int i = 0 ;i < N;++i)
			{
				String str = s.readLine();
				for(int j = 0;j<str.length();++j)
				{
					freq[i][str.charAt(j)-97]++;
				}
			}
			int count = 0;
			for(int i =0;i<26;++i)
			{
				int flag = 0;
				for(int j = 0;j<N;++j)
				{
					if(freq[j][i] == 0)
					{
						flag = 1;
						break;
					}
				}
				if(flag == 0)
					count++;
			}
			System.out.println(count);
		}
	}

}
