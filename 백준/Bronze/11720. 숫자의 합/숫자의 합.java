import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = Integer.parseInt(sc.nextLine());
        String b = sc.nextLine();
        int[] x = new int[a];
        int sum = 0;
        for (int i = 0; i < a; i++) {
            x[i] = Integer.parseInt(String.valueOf(b.charAt(i)));
            sum += x[i];
        }
        System.out.println(sum);
    }

}