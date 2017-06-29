package hh;

import java.util.Arrays;
import java.util.Scanner;

public class TreeNode {
	int val;
	TreeNode left=null;
	TreeNode right=null;
	
	TreeNode(int x){ 
		val = x; 
	}
	
	 public static TreeNode reConstructBinaryTree(int [] pre,int [] in){
		 int len = pre.length;
		 if(len == 0)
			 return null;
		 
		 TreeNode head = new TreeNode(pre[0]);
		 int i;
		 for(i=0; i<in.length; i++)
			 if(in[i] == pre[0])
				 break;
		 
		 int[] left_in = Arrays.copyOfRange(in, 0, i);
		 int[] right_in = Arrays.copyOfRange(in, i + 1, in.length);
		 int[] left_pre = Arrays.copyOfRange(pre, 1, i + 1);
		 int[] right_pre = Arrays.copyOfRange(pre, i + 1, pre.length);
		 
		 head.left = reConstructBinaryTree(left_pre, left_in);
		 head.right = reConstructBinaryTree(right_pre, right_in);
		 return head;	 
	 }
	
	public static void CreateBiTree(TreeNode T){
		Scanner in=new Scanner(System.in);
		int x=in.nextInt();
		if(x==-1)
			T=null;
		else{
			T = new TreeNode(x);
			CreateBiTree(T.left);
			CreateBiTree(T.right);
		}
	}
	
	public static void PreOrder(TreeNode T){
		if(T!=null){
			System.out.print(T.val + " ");
			PreOrder(T.left);
			PreOrder(T.right);
		}
	}
	
	public static void InOrder(TreeNode T){
		if(T!=null){
			InOrder(T.left);
			System.out.print(T.val + " ");
			InOrder(T.right);
		}
	}
	
	public static void PostOrder(TreeNode T){
		if(T!=null){
			PostOrder(T.left);
			PostOrder(T.right);
			System.out.print(T.val + " ");
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("tree");
//		TreeNode T=new TreeNode(0);
//		CreateBiTree(T); Wrong!!!
		
		int pre[] = {1,2,4,7,3,5,6,8};
		int in[] = {4,7,2,1,5,3,8,6};
		TreeNode T = reConstructBinaryTree(pre, in);
		
		System.out.println("前序遍历：");
		PreOrder(T);
		System.out.println();
		System.out.println("中序遍历：");
		InOrder(T);
		System.out.println();
		System.out.println("后序遍历：");
		PostOrder(T);
	}

}
