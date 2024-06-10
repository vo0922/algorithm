import java.util.*;
import java.io.*;

public class Main {
    
  public static void main(String[] args) throws IOException{
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
    
    int n = Integer.valueOf(bf.readLine());
    int[] numbers = new int[n];
    int[] results = new int[n];
    int[] triangleNumbers = new int[45];
    
    for (int i = 0; i < n; i++) {
      numbers[i] = Integer.valueOf(bf.readLine());
    }
    
    for (int i = 1; i <= 45; i++) {
      triangleNumbers[i - 1] = i * (i + 1) / 2;
    }
    
    for (int q = 0; q < n; q++) {
      for (int i = 0; i < 45; i++) {
        for (int j = 0; j < 45; j++) {
          for (int k = 0; k < 45; k++) {
            int sum = triangleNumbers[i] + triangleNumbers[j] + triangleNumbers[k];
            if (sum == numbers[q]) {
              results[q] = 1;
            }
          }
        }
      }
    }
    
    for (int i = 0; i < n; i++) {
      System.out.println(results[i]);
    }
    
    
  }
  
}