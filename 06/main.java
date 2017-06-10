package hi;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class solution {
	public static int minNumberInRotateArray(int [] array) {
	    if(array.length==0)
	    	return 0;
	    for(int i=1;i<array.length;i++)
	    	if(array[i]<array[i-1])
	    		return array[i];
	    return array[0];
    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		solution so=new solution();
		int[] vec0=new int[100];
		Scanner in=new Scanner(System.in);
		int cnt;
		for(cnt=0;cnt<vec0.length;cnt++){
			int x=in.nextInt();
			if(x<=0)
				break;
			else
				vec0[cnt]=x;
		}
		int[] vec=Arrays.copyOfRange(vec0, 0, cnt);
		int y=so.minNumberInRotateArray(vec);
		System.out.println("The number is:"+y);
	}

}
