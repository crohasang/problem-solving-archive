import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] a = new int[9];

        int max = a[0];
        int maxnumber = 0;


        for (int i = 0; i < 9; i++) {
            a[i] = Integer.parseInt(br.readLine());
            if(a[i] > max){
                max = a[i];
                maxnumber = i + 1;
            }
        }


        bw.write(String.valueOf(max+ "\n"));
        bw.write(String.valueOf(maxnumber));
        br.close();
        bw.flush();
        bw.close();
    }
}