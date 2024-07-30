import java.util.*;
import java.io.*;

public class Main {
  
    static int[] nNumbers;
  
    public static void main(String[] args) throws IOException {
      
      BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
      int t = Integer.valueOf(bf.readLine());
      StringBuilder sb = new StringBuilder();
      
      for (int k = 0; k < t; k++) {
        int n = Integer.valueOf(bf.readLine());
        nNumbers = new int[n];
        
        StringTokenizer st = new StringTokenizer(bf.readLine());
        for (int i = 0; i < n; i++) {
          nNumbers[i] = Integer.parseInt(st.nextToken());
        }
        
        Arrays.sort(nNumbers);
  
        int m = Integer.valueOf(bf.readLine());

        st = new StringTokenizer(bf.readLine());
        for (int i = 0; i < m; i++) {
          int mNumber = Integer.parseInt(st.nextToken());
          sb.append(binarySearch(0, n - 1, mNumber));
          sb.append('\n');
        }
      }
      
      System.out.println(sb.toString());
  }
  
    public static int binarySearch(int left, int right, int key) {
    
      int mid = (right + left) / 2;
      
      if (left <= right){
        if (nNumbers[mid] == key){
          return 1;
        } else if (nNumbers[mid] > key) {
          return binarySearch(left, mid - 1, key);
        } else {
          return binarySearch(mid + 1, right, key);
        }
      }
      
      return 0;
  }

}