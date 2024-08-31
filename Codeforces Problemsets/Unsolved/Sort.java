// https://codeforces.com/contest/1996/problem/C
import java.util.ArrayList;
import java.util.Scanner;

public class Sort {

    public int numberOfOperations(String a, String b, int l, int r) {
        int counter = 0;
        
        String subA = a.substring(l, r + 1);
        String subB = b.substring(l, r + 1);
        
        
        ArrayList<Character> listB = new ArrayList<>();
        for (int i = 0; i < subB.length(); i++) {
            listB.add(subB.charAt(i));
        }
        
        
        for (int i = 0; i < subA.length(); i++) {
            if (!listB.contains(subA.charAt(i))) {
                counter++;
            }
        }
        
        return counter;
    }

    public static void main(String[] args) {
        Sort sort = new Sort();
        Scanner scan = new Scanner(System.in);
        
        int t = scan.nextInt();
        scan.nextLine();
        
        for (int i = 0; i < t; i++) {
            int n = scan.nextInt();
            int q = scan.nextInt();
            scan.nextLine();
            
            String a = scan.nextLine();
            String b = scan.nextLine();
            
            for (int j = 0; j < q; j++) {
                int l = scan.nextInt();
                int r = scan.nextInt();
                
                int result = sort.numberOfOperations(a, b, l - 1, r - 1); 
                System.out.println(result);
            }
        }
        
        scan.close();
    }
}
