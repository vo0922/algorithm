import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    
    static int[][] stadium;
    
    public static void main(String[] args) throws IOException {
      
      BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
      int n = Integer.valueOf(bf.readLine());
      boolean[] check = new boolean[988];
      
      for (int i = 123; i < 988; i++) {
        String num = String.valueOf(i);
        
        if (num.charAt(0) == '0' || num.charAt(1) == '0' || num.charAt(2) == '0') {
          continue;
        }
        if (num.charAt(0) == num.charAt(1) || num.charAt(0) == num.charAt(2) || num.charAt(1) == num.charAt(2)) {
          continue;
        }
        
        check[i] = true;
      }
      
      for (int i = 0; i < n; i++) {
        StringTokenizer st = new StringTokenizer(bf.readLine());
        
        int num = Integer.valueOf(st.nextToken());
        int s = Integer.valueOf(st.nextToken());
        int b = Integer.valueOf(st.nextToken());
        
        for (int j = 123; j < 988; j++) {
          if (check[j]) {
            int sn = 0;
            int bn = 0;
            
            for (int k = 0; k < 3; k++) {
              char splitNum = Integer.toString(num).charAt(k);
              
              for (int l = 0; l < 3; l++) {
                char preNum = Integer.toString(j).charAt(l);
                if (splitNum == preNum && k == l) {
                  sn++;
                } else if (splitNum == preNum && k != l) {
                  bn++;
                }
              }
              
              if (sn == s && bn == b) {
                check[j] = true;
              } else {
                check[j] = false;
              }
              
            }
          }  
        }
      }
      
      int result = 0;
      for (int i = 123; i <= 987; i++) {
        if (check[i]) {
          result++;
        }
      }
      System.out.println(result);
    }
    
}