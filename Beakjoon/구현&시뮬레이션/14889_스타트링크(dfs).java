import java.util.*;
import java.io.*;

public class Main {
  
  static int n;
  static boolean[] visited;
	static int[][] graph;
	
	static int min = Integer.MAX_VALUE;
	  
  public static void main(String[] args) throws IOException {
    
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    n = Integer.valueOf(br.readLine());
    
    graph = new int[n][n];
    visited = new boolean[n];
    
    for(int i = 0; i < n; i++) {
      StringTokenizer st = new StringTokenizer(br.readLine());
      for(int j = 0; j < n; j++) {
        graph[i][j] = Integer.valueOf(st.nextToken());
      }
    }
    
    dfs(0, 0);
    
    System.out.println(min);
  }
  
  public static void dfs(int idx, int count) {
    
    if(count == n/2) {
      diff();
      return;
    }
    
    for(int i = idx; i < n; i++) {
      if(!visited[i]) {
        visited[i] = true;
        dfs(i + 1, count + 1);
        visited[i] = false;
      }
    }
    
  }
  
  public static void diff() {
    int start = 0;
    int link = 0;
    
    for(int i = 0; i < n - 1; i++) {
      for(int j = i + 1; j < n; j++) {
        if(visited[i] == true && visited[j] == true) {
          start += graph[i][j];
          start += graph[j][i];
        } else if(visited[i] == false && visited[j] == false) {
          link += graph[i][j];
          link += graph[j][i];
        }
      }
    }
    
    int diffScore = Math.abs(start - link);
    
    if(diffScore == 0) {
      System.out.println(diffScore);
      System.exit(0);
    }
    
    min = Math.min(diffScore, min);
  }
  
}