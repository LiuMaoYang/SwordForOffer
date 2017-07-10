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
	
	public static boolean isSubTree(TreeNode root1, TreeNode root2){
		if(root2 == null)
			return true;
		if(root1 == null)
			return false;
		if(root1.val == root2.val)
			return isSubTree(root1.left, root2.right) && isSubTree(root1.right, root2.right);
		else
			return false;
	}
	
	public static boolean HasSubtree(TreeNode root1,TreeNode root2) {
        if(root1 == null || root2 == null)
        	return false;
        return isSubTree(root1, root2) || HasSubtree(root1.left, root2) || HasSubtree(root1.right, root2);
    }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		String str = in.nextLine();
		String[] s = str.split("# ");
		String[] str1 = s[0].split(" ");
		String[] str2 = s[1].split(" ");
		//2 1 -1 4 -1 -1 5 3 -1 -1 -1 # 5 3 -1 -1 -1
		//8 8 7 9 2 -1 -1 -1 -1 4 7 # 8 9 2 ?
		
		for(int i=0;i<str1.length;i++)
			data.add(Integer.valueOf(str1[i]).intValue());		
		cnt = 0;
		TreeNode T1= CreateBiTree();
		data.clear();
		
		for(int i=0;i<str2.length;i++)
			data.add(Integer.valueOf(str2[i]).intValue());		
		cnt = 0;
		TreeNode T2= CreateBiTree();
		
		if(HasSubtree(T1, T2))
			System.out.println("T2 is a subTree of T1");
		else
			System.out.println("T2 is NOT a subtree of T1");
	}

}
