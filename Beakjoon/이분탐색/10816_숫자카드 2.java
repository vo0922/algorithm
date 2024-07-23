import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {

    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
    
    int n = Integer.valueOf(bf.readLine());
    Integer[] numbers = new Integer[n];
    
    StringTokenizer st = new StringTokenizer(bf.readLine());
    for (int i = 0; i < n; i++) {
      numbers[i] = Integer.parseInt(st.nextToken());
    }
    
    int m = Integer.valueOf(bf.readLine());
    int[] findNumbers = new int[m];
    StringBuilder sb = new StringBuilder();
    
    st = new StringTokenizer(bf.readLine());
    for (int i = 0; i < m; i++) {
      findNumbers[i] = Integer.parseInt(st.nextToken());
    }
    
    Map<Integer, Integer> numberMap = new HashMap<>();
    for (int number : numbers) {
      numberMap.put(number, numberMap.getOrDefault(number, 0) + 1);
    }

    for (int i = 0; i < m; i++) {
      sb.append(numberMap.getOrDefault(findNumbers[i], 0)).append(" ");
    }
    
    System.out.println(sb);
  }
}