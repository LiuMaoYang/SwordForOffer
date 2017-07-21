package hh;

import java.util.ArrayList;
import java.util.Scanner;

public class TreeNode {
	int val;
	TreeNode left=null;
	TreeNode right=null;
	
	TreeNode(int x){ 
		this.val = x; 
	}
	
	public static ArrayList<Integer> data = new ArrayList<>();
	public static int cnt;
	
	public static TreeNode CreateBiTree(){
		TreeNode T = null;
		if(cnt >= data.size() || data.get(cnt++) == -1)
			T=null;
		else{
			T = new TreeNode(data.get(cnt-1));
			T.left = CreateBiTree();
			T.right = CreateBiTree();
		}
		return T;
	}
		
	public static void preOrder(TreeNode T){
		if(T != null){
			System.out.print(T.val+" ");
			preOrder(T.left);
			preOrder(T.right);
		}
	}
	
	public static void Mirror(TreeNode root) {
        if(root!=null){
        	TreeNode temp = new TreeNode(0);
        	temp = root.left;
        	root.left = root.right;
        	root.right = temp;
        	Mirror(root.left);
        	Mirror(root.right);
        }
    }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		String[] s = str.split(" ");
		//2 1 -1 4 -1 -1 5 3 -1 -1 -1 
		
		for(int i=0;i<s.length;i++)
			data.add(Integer.valueOf(s[i]).intValue());		
		cnt = 0;
		TreeNode T= CreateBiTree();
		
		preOrder(T);
		System.out.println(" ");
		System.out.println("Mirror Tree:");
		Mirror(T);
		preOrder(T);	
	}
}
