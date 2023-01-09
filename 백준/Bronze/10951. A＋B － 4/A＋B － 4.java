import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.Scanner;
import java.util.StringTokenizer;



public class Main {
    public static void main(String[] args) throws IOException {
            Scanner sc = new Scanner(System.in);

            while(sc.hasNextInt()) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                System.out.println(a+b);
            }
    }
}