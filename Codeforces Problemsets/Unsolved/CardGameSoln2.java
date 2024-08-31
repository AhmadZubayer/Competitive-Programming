import java.util.Scanner;

public class CardGameSoln2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t, a1, a2, b1, b2;
        t = scan.nextInt();
        for (int i = 0; i < t; i++) {
            a1 = scan.nextInt();
            a2 = scan.nextInt();
            b1 = scan.nextInt();
            b2 = scan.nextInt();
            int sumSuneet = a1 * a2 ;
            int sumSlavic = b1 * b2;
            if(sumSuneet > sumSlavic) {
                System.out.println(4);
            } else if ( sumSuneet < sumSlavic) {
                System.out.println(2);
            } else {
                System.out.println(0);
            }
        }
        scan.close();
    }
}