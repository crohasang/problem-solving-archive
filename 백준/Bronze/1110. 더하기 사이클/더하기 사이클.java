import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;



public class Main {
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int N = sc.nextInt();
            int n = N;
            int count = 0;

            while(true){
                count++;
                int A = (int)(N/10) + (int)(N%10);
                if(A >= 10){
                    A = A % 10;
                }
                N = 10*(N%10) + A;

                if(N==n){
                    break;
                }
            }
        System.out.println(count);
    }
}