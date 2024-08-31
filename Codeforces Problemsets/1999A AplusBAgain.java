// A. A+B Again? Contest: 1999 (Div 4)
// https://codeforces.com/contest/1999/problem/A
import java.util.Scanner;

public class AplusBAgain {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t, n;
        t = scan.nextInt();
        if (1 <= t && t <= 99) {
            for (int i = 0; i < t; i++) {
                n = scan.nextInt();
                if (10 <= n && n <= 99) {
                    int q = n / 10;
                    int rem = n % 10;
                    int sum = q + rem;
                    System.out.println(sum);
                }
            }
        }
    }
}
