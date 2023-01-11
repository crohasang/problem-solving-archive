import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st;
        double[] a = new double[N];
        double M = 0;
        double sum = 0;
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            a[i] = Integer.parseInt(st.nextToken());
            if (a[i] > M) {
                M = a[i];
            }
        }

        for (int i = 0; i < N; i++) {
            a[i] = a[i]/M*100;
            sum += a[i];
        }
        br.close();

        double avg = sum/N;
        System.out.println(avg);
    }
}