package hi;

import java.util.ArrayList;
import java.util.Scanner;

public class solution {
    public static void reOrderArray(int [] array) {
        ArrayList<Integer> odd=new ArrayList<Integer>();
        ArrayList<Integer> even=new ArrayList<Integer>();
        for(int i=0;i<array.length;i++){
        	if(array[i]%2==0)
        		even.add(array[i]);
        	else
        		odd.add(array[i]);
        }
        odd.addAll(even);
        for(int i=0;i<array.length;i++)
        	array[i]=odd.get(i);
    }

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		ArrayList<Integer> l=new ArrayList<Integer>();
		int x=in.nextInt();
		while(x!=0){
			l.add(x);
			x=in.nextInt();
		}
		int[] array=new int[l.size()];
		for(int i=0;i<l.size();i++)
			array[i]=l.get(i);
		reOrderArray(array);
		for(int i=0;i<array.length;i++)
			System.out.print(array[i]+" ");
	}
}
