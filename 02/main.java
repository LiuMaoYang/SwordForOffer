package hi;

import java.util.Scanner;

public class Main {
	 public static String replaceSpace(StringBuffer str){
		 if(str==null)
			 return null;
		 
		 StringBuffer s=new StringBuffer();
		 for(int i=0;i<str.length();i++){
			 char c=str.charAt(i);
			 if(c==' ')
				 s.append("%20");
			 else
				 s.append(c);
		 }
		 return s.toString();
	 }
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuffer str=new StringBuffer();
		str.append(in.nextLine());
		System.out.println(replaceSpace(str));
	}
}



