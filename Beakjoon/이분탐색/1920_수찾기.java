import java.util.*;
import java.io.*;

public class Main {
  
  private static int numbers[];
  
    public static void main(String[] args) throws IOException {
      
      BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
      
      int n = Integer.valueOf(bf.readLine());
      numbers = new int[n];
      
      StringTokenizer st = new StringTokenizer(bf.readLine());
      for (int i = 0; i < n; i++) {
        numbers[i] = Integer.valueOf(st.nextToken());
      }
      Arrays.sort(numbers);
      
      int m = Integer.valueOf(bf.readLine());
      StringBuilder sb = new StringBuilder();
      
      st = new StringTokenizer(bf.readLine());
      for (int i = 0; i < m; i++) {
        int number = Integer.valueOf(st.nextToken());
        sb.append(binarySearch(0, n - 1, number));
        sb.append("\n");
      }
      
      System.out.println(sb.toString());
  }
  
  public static int binarySearch(int left, int right, int key) {
    
    int mid = (right + left) / 2;
    
    if (left <= right){
      if (numbers[mid] == key){
        return 1;
      } else if (numbers[mid] > key) {
        return binarySearch(left, mid - 1, key);
      } else {
        return binarySearch(mid + 1, right, key);
      }
    }
    
    return 0;
  }
}