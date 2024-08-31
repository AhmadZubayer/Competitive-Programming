// https://codeforces.com/contest/1999/problem/B

import java.util.Scanner;

public class CardGame {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t, a1, a2, b1, b2;
        t = scan.nextInt();
        for (int i = 0; i < t; i++) {
            a1 = scan.nextInt();
            a2 = scan.nextInt();
            b1 = scan.nextInt();
            b2 = scan.nextInt();

            // Check if both of Suneet's cards are strictly greater than or equal to both of Slavic's cards
            if ((a1 >= b1 && a1 >= b2) && (a2 > b1 && a2 > b2) || (a1 > b1 && a1 > b2) && (a2 >= b1 && a2 >= b2)) {
                System.out.println(4);
            }
            // Check if Suneet's cards cannot win against Slavic's cards
            else if ((a1 <= b1 && a1 <= b2) && (a2 <= b1 && a2 <= b2)) {
                System.out.println(0);
            }
            // Otherwise, Suneet wins exactly one round
            else {
                System.out.println(2);
            }
        }
        scan.close();
    }
}
