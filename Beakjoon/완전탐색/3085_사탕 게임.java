import java.util.*;
import java.io.*;

class Main {
  
  public static char[][] board;
  public static int n;
  public static int max = 0;
  
  public static void main(String[] args) throws IOException {
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

    n = Integer.valueOf(bf.readLine());
    board = new char[n][n];

    for (int i = 0; i < n; i++) {
      String s = bf.readLine();
      for (int j = 0; j < n; j++) {
        board[i][j] = s.charAt(j);
      }
    }
    
    arrCheck();
    swap();

    System.out.println(max);
  }
  
  public static void arrCheck() {
    
    for (int i = 0; i < n; i++) {
      int count = 1;
      for (int j = 0; j < n - 1; j++) {
        if (board[i][j] == board[i][j + 1]) {
          count++;
        } else {
          count = 1;
        }
        
        max = Math.max(max, count);
      }
    }
    
    for (int i = 0; i < n; i++) {
      int count = 1;
      for (int j = 0; j < n - 1; j++) {
        if (board[j][i] == board[j + 1][i]) {
          count++;
        } else {
          count = 1;
        }
        
        max = Math.max(max, count);
      }
    }
    
  }
  
  public static void swap() {
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        char temp = board[i][j];
        board[i][j] = board[i][j + 1];
        board[i][j + 1] = temp;
        
        arrCheck();
        
        temp = board[i][j];
        board[i][j] = board[i][j + 1];
        board[i][j + 1] = temp;
      }
    }
    
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        char temp = board[j][i];
        board[j][i] = board[j + 1][i];
        board[j + 1][i] = temp;
        
        arrCheck();
        
        temp = board[j][i];
        board[j][i] = board[j + 1][i];
        board[j + 1][i] = temp;
      }
    }
  }
}