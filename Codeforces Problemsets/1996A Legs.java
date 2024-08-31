// https://codeforces.com/contest/1996/problem/A

import java.util.Scanner;

public class Legs {
    
    public boolean isEven(int n) {
        if (n % 2 == 0) {
            return true;
        }
        return false;
    }
    
    public int numberOfAnimals(int n) {
    	int sum=0;
    	if (n == 2) {
    		sum = 1;
    	} else {
    		int res = n /4;
    		sum +=  res;
    		int rem = n % 4;
    		if (rem !=0) {
    			sum ++; 
    		} 
    	}
    	return sum;
    }
    
    public static void main(String[] args) {
        
    	Legs legs = new Legs(); 
    	Scanner scan = new Scanner(System.in);
    	
        int t = scan.nextInt();
        if (1 <= t && t <= 1000) {
        	int[] n = new int[t];
        	for (int i=0; i < n.length; i++) {
        		n[i] = scan.nextInt();
        		
                if (legs.isEven(n[i])) { 
                    System.out.println(legs.numberOfAnimals(n[i]));
                } else { }
        	} 
        }
        scan.close();
    }
}