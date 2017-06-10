package hi;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class solution {
	public static int Fibonacci(int n) {
		if(n<0)
			return (Integer) null;
		else if(n==0 || n==1)
			return n;
		ArrayList<Integer> f=new ArrayList<Integer>();
		f.add(0);
		f.add(1);
		for(int i=2;i<=n;i++)
			f.add(f.get(i-1)+f.get(i-2));
		return f.get(n);
    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		solution so=new solution();
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int f=so.Fibonacci(n);
		System.out.println("Item n of Fibonacci sequence:"+f);
	}

}
