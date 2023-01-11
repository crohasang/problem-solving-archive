import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] a = new int[31];
        int n = 0;

        for (int i = 0; i < 28; i++) {
            n = Integer.parseInt(br.readLine());
            a[n] = n;
            }

        int[] b = new int[2];

        for (int i = 1; i <= 30; i++) {
            if(a[i] == 0){
                if(b[0] == 0){
                    b[0] = i;
                } else {
                    b[1] = i;
                }
            }
        }

        Arrays.sort(b);


        bw.write(String.valueOf(b[0]+ "\n"));
        bw.write(String.valueOf(b[1]));
        br.close();
        bw.flush();
        bw.close();
    }
}