import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws NumberFormatException, IOException {
      BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
      
      int n = Integer.parseInt(reader.readLine());
      int[] time = new int[n];
      int[] pay = new int[n];
      
      for(int i = 0; i < n; i++) {
        StringTokenizer st = new StringTokenizer(reader.readLine());
        
        time[i] = Integer.parseInt(st.nextToken());
        pay[i] = Integer.parseInt(st.nextToken());
      }
      
      int[] dp = new int[n + 1];
      
        for(int i = 0; i < n; i++) {
            if(i + time[i] <= n) { 
            	dp[i + time[i]] = Math.max(dp[i + time[i]], dp[i] + pay[i]);
            }
          
            dp[i+1] = Math.max(dp[i+1], dp[i]);
        }
        
      System.out.println(dp[n]);
  }
}