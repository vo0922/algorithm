import java.util.*;
import java.io.*;

public class Main {
    
  public static void main(String[] args) throws IOException{
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
    
    int n = Integer.valueOf(bf.readLine());
    int result = 0;
    int nLength = (int)(Math.log10(n) + 1);
    
    for (int i = (n - (9 * nLength)); i < n; i++) {
      int sum = 0;
      int number = i;
      
      while (number != 0) {
        sum += number % 10;
        number = number / 10;
      }
      
      if (sum + i == n) {
        result = i;
        break;
      }
    }
    
    System.out.println(result);
  }
  
}