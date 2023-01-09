import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(bf.readLine());
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer sum;
        for (int i = 0; i < T; i++) {
            sum = new StringTokenizer(bf.readLine(), " ");
            bw.write(Integer.parseInt(sum.nextToken())+ Integer.parseInt(sum.nextToken()) + "\n");}
        bw.flush();
        bw.close();
    }
}