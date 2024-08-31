// https://codeforces.com/contest/1436/problem/B

import java.util.Scanner;

public class PrimeSquare {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();

        for (int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int[][] square = new int[n][n];

            if (n == 2) {
                for (int j = 0; j < square.length; j++) {
                    for (int k = 0; k < square[j].length; k++) {
                        square[j][k] = 1;
                    }
                }
            } else {
                for (int l = 0; l < square.length; l++) {
                    for (int m = 0; m < square[l].length; m++) {
                        square[l][m] = 4;
                    }
                }

                for (int p = 0; p < square.length; p++) {
                    square[p][square.length - 1] = 1;
                }

                for (int q = 0; q < square.length; q++) {
                    square[square.length - 1][q] = 1;
                }

                square[square.length - 1][square.length - 1] = 2;
            }

            for (int r = 0; r < square.length; r++) {
                for (int s = 0; s < square[r].length; s++) {
                    System.out.print(square[r][s] + " ");
                }
                System.out.println();
            }
        }
        scan.close();
    }
}
