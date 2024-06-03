import java.util.*;
import java.lang.*;
import java.io.*;

class Main {

    private static Map<Integer, Integer> binggo = new HashMap<Integer, Integer>();
    private static boolean[][] checkBinggo = new boolean[5][5];

    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 25; i++) {
            binggo.put(sc.nextInt(), i);
        }

        for(int i = 0; i < 5; i++) {
            Arrays.fill(checkBinggo[i], false);
        }

        for(int i = 0; i < 25; i++) {
            int check = binggo.get(sc.nextInt());
            if(!Objects.isNull(check)) {
                checkBinggo[(int)check/5][(int)check%5] = true;    
            } else {
                continue;
            }
            
            int count = rowCheck() + colCheck() + diaCheck();

            if (count >= 3) {
                System.out.println(i + 1);
                break;
            }
        }
    }

    public static int rowCheck() {
        int binggo = 0;
        outer:
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(!checkBinggo[i][j]) {
                    continue outer;
                }
            }
            binggo++;
        }
        return binggo;
    }

    public static int colCheck() {
        int binggo = 0;
        outer:
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(!checkBinggo[j][i]) {
                    continue outer;
                }
            }
            binggo++;
        }
        return binggo;
    }

    public static int diaCheck() {
        int binggo = 0;
        int leftFlag = 1;
        int rightFlag = 1;
        
        for(int i = 0; i < 5; i++) {
            if(!checkBinggo[i][i]) {
                leftFlag = 0;    
            }
            if(!checkBinggo[i][4 - i]) {
                rightFlag = 0;
            }
        }
        binggo = leftFlag + rightFlag;
        return binggo;
    }
}
