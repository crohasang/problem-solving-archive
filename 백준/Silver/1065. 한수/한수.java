import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        int count = 0;
        for (int i = 1; i <= num; i++) {
            if(hansu(i) == true) {
                count++;
            }
        }
        System.out.println(count);
    }

    static boolean hansu(int n) {
        boolean x = true;
        if(n<100){
            x = true;
        }
        else if(n>=100){
            int a = (int)(n/100);
            int b = (int)((n%100)/10);
            int c = (int)((n%100)%10);

            if(a+c == 2*b){
                x = true;
            } else {
                x = false;
            }
        }
        return x;
    }
}