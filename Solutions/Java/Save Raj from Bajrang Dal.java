import java.util.*;
import java.io.*;
import java.math.*;
public class Waw{
    
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        long[] a = new long[n];
        for(int i=0;i<n;i++) a[i] = sc.nextLong();
        Arrays.sort(a);
        long x,y,sum=0;
        for(int i=0;i<n/2;i++){
            x = a[i];
            y = a[n-i-1];
            sum += (x+y)*(x+y);
        }
        System.out.println(sum);
    }
    

    
    
}