import java.util.*;
import java.lang.*;
import java.io.*;

class Main {

    static char[][] board;
    static int n;
    static int max = 0;
    
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
        
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n - 1; j++) {
            swap(i, j, i, j + 1);
            checkEat();
            swap(i, j, i, j + 1);
            swap(j, i, j + 1, i);
            checkEat();
            swap(j, i, j + 1, i);
          }
        }
        
        System.out.println(max);
    }
    
    public static void swap(int x1, int y1, int x2, int y2) {
      
      char temp = board[x1][y1];
      
      board[x1][y1] = board[x2][y2];
      board[x2][y2] = temp;
    }
    
    public static void checkEat() {
      
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
    
}