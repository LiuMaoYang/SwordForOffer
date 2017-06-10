package hi;

import java.util.Scanner;

public class Main {
	public static boolean Find(int target, int [][] array) {
		for(int i=0;i<array.length;i++)
			for(int j=0;j<array[0].length;j++)
				if(target==array[i][j])
					return true;
		return false;
    }
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int[][] array=new int[4][4];
		int n=0;
		for(int i=0;i<array.length;i++){
			for(int j=0;j<array[0].length;j++){
//				array[i][j]=n;
//				n=n+1;
				array[i][j]=(int)(Math.random()*10);
				System.out.printf("%d\t",array[i][j]);
			}
			System.out.println();	
		}
		System.out.println();
		
		if(Find(in.nextInt(),array))
			System.out.println("found");
		else
			System.out.println("not found");

	}
}



