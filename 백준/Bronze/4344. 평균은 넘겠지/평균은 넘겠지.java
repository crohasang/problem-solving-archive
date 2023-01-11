import java.io.*;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int C = Integer.parseInt(br.readLine());

        for (int i = 0; i < C; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int sum = 0;
            int[] a = new int[N];
            for (int j = 0; j < N; j++) {
                a[j] = Integer.parseInt(st.nextToken());
                sum = sum + a[j];
            }
            double avg = sum / N;
            double avgcount = 0;
            for (int j = 0; j < N; j++) {
                if(a[j] > avg) {
                    avgcount++;
                }
            }

            double avgrate = (avgcount / N);
            System.out.println((String.format("%.3f", (100*avgrate) )) + "%");

        }
        }
    }