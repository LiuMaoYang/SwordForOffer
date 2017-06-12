package hi;

import java.util.Scanner;

public class solution {
	public static double Power(double base, int exponent) {
        int e=exponent;
        double y=1;
        e=Math.abs(e);
        while(e-->0)
        	y*=base;
        if(exponent<0)
        	y=1/y;
        return y;
     }

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		double base=in.nextInt();
		int exp=in.nextInt();
		System.out.println(base+"^"+exp+"="+Power(base, exp));
	}
}
