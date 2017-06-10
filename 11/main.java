package hi;

import java.util.Scanner;

public class solution {
    public static int NumberOf1(int n) {
    	int cnt=0;
    	while(n!=0){
    		n=n&(n-1);
    		cnt++;
    	}
    	return cnt;
    }

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int num=in.nextInt();
		int cnt=NumberOf1(num);
		System.out.println("the number is: "+cnt);
	}
}
