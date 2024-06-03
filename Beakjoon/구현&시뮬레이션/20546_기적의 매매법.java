import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      
      int seed = sc.nextInt();
      int[] stock = new int[14];
      
      for(int i = 0; i < 14; i++) {
        stock[i] = sc.nextInt();
      }
      
      int jun = BNP(seed, stock);
      int sung = TIMING(seed, stock);
      
      if(jun > sung) System.out.println("BNP");
      else if(sung > jun) System.out.println("TIMING");
      else System.out.println("SAMESAME");
  }
  
  public static int BNP(int seed, int[] stock) {
    int stockCount = 0;
    int leftSeed = seed;
    
    for(int i = 0; i < 14; i++) {
      if (leftSeed >= stock[i]) {
        stockCount += leftSeed / stock[i];
        leftSeed = leftSeed % stock[i];
      }
    }
    
    return stock[13] * stockCount + leftSeed;
  }
  
  public static int TIMING(int seed, int[] stock) {
    int stockCount = 0;
    int leftSeed = seed;
    
    for(int i = 3; i < 14; i++) {
      if(stock[i - 3] < stock[i - 2] && stock[i - 2] < stock[i - 1]) {
        leftSeed = stockCount * stock[i] + leftSeed;
        stockCount = 0;
      }else if(stock[i - 3] >= stock[i - 2] && stock[i - 2] >= stock[i - 1]) {
        stockCount += leftSeed / stock[i];
        leftSeed = leftSeed % stock[i];
      }
    }
    
    return stock[13] * stockCount + leftSeed;
  }
}
