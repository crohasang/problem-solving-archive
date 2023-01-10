import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int X = Integer.parseInt(st.nextToken());

        StringTokenizer st2 = new StringTokenizer(br.readLine());
        int[] arr = new int[N];
        int[] arr2 = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st2.nextToken());
            if(arr[i] < X){
                arr2[i] = arr[i];
            }
        }

        for (int i = 0; i < arr2.length; i++) {
            if(arr2[i] == 0){

            } else {
                bw.write(String.valueOf(arr2[i]));
                bw.write(" ");
            }
        }
        bw.flush();
        bw.close();
        br.close();
    }
}