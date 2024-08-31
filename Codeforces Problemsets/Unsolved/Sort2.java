//1996 C. Sort2
import java.util.Scanner;
import java.util.Arrays;

public class Sort2 {
    
    public int numberOfOperations(String a, String b, int l, int r) {
        int counter = 0;
        
        char[] sortedA = a.toCharArray();
        Arrays.sort(sortedA);
        
        char[] sortedB = b.toCharArray();
        Arrays.sort(sortedB);
        
        String sortedStringA = new String(sortedA);
        String sortedStringB = new String(sortedB);
        
        String subA = sortedStringA.substring(l, r + 1);
        String subB = sortedStringB.substring(l, r + 1);
        
        for (int i = 0; i < subA.length(); i++) {
            if (subA.charAt(i) != subB.charAt(i)) {
                counter++;
            }
        }
        
        return counter;
    }
    
    public static void main(String[] args) {
        Sort2 sort = new Sort2();
        Scanner scan = new Scanner(System.in);
        
        int t = scan.nextInt();
        scan.nextLine(); // Consume the newline character
        
        if (1 <= t && t <= 1000) {
            for (int i = 0; i < t; i++) {
                int n = scan.nextInt();
                int q = scan.nextInt();
                scan.nextLine(); // Consume the newline character
                
                if (1 <= n && n <= 200000 && 1 <= q && q <= 200000) {
                    String a = scan.nextLine();
                    String b = scan.nextLine();
                    
                    for (int j = 0; j < q; j++) {
                        int l = scan.nextInt();
                        int r = scan.nextInt();
                        
                        int result = sort.numberOfOperations(a, b, l, r);
                        System.out.println("Number of different indices: " + result);
                    }
                }
            }
        }
        
        scan.close();
    }
}

