import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] a = new int[10];
        int n = 0;
        int count = 0;
        boolean check;
        for (int i = 0; i < 10; i++) {
            n = Integer.parseInt(br.readLine());
            a[i] = n % 42;
            }

        for (int i = 0; i < 10; i++) {
            check = true;
            for (int j = i+1; j < 10; j++) {
                if(a[i] == a[j]){
                    check = false;
                }
            }
            if(check == true){
                count++;
            }
        }

        br.close();
        System.out.println(count);

    }
}
