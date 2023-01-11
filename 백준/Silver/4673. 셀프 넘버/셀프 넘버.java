import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) {

        boolean[] exist = new boolean[10001];

        for (int i = 0; i < 10001; i++) {
            int n = d(i);

            if(n < 10001){
                exist[n] = true;
            }
        }

        for (int i = 0; i < exist.length; i++) {
            if(exist[i] == false){
                System.out.println(i);
            }
        }
    }

    static int d(int n) {
        int x = n;
        while(n!=0){
            x += (n%10);
            n = (int)n/10;
        }

        return x;
    }
}
