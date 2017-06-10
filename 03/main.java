package hi;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

public class ListNode {
	int val;
	ListNode next = null;

//	ListNode(int val) {
//		this.val = val;
//	}
	
	public static void CreatList(ListNode list, ArrayList<Integer> data){
		ListNode temp1=new ListNode();
		temp1=list;
		temp1.val=data.get(0);
		for(int i=1;i<data.size();i++){
			ListNode temp2=new ListNode();
			temp2.val=data.get(i);
			temp1.next=temp2;
			temp1=temp2;
		}		
	}
	
//	public static void CreatList(ListNode list, int cnt){
//		Scanner in=new Scanner(System.in);
//		ListNode temp1=new ListNode();
//		temp1=list;
//		if(cnt>0)
//			temp1.val=in.nextInt();
//		
//		for(int i=1;i<cnt;i++){
//			ListNode temp2=new ListNode();
//			temp2.val=in.nextInt();
//			temp1.next=temp2;
//			temp1=temp2;
//		}
//	}

	public static ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
		ArrayList<Integer> list=new ArrayList<Integer>();
		Stack<Integer> s=new Stack<Integer>();
		while(listNode!=null){
			s.push(listNode.val);
			listNode=listNode.next;
		}
		while(!s.isEmpty())
			list.add(s.pop());
		
		return list;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ListNode list=new ListNode();
		Scanner in=new Scanner(System.in);
		int cnt=in.nextInt();
		ArrayList<Integer> data=new ArrayList<Integer>();
		for(int i=0;i<cnt;i++)
			data.add(in.nextInt());
		CreatList(list, data);

//		CreatList(list, cnt);
		
		ArrayList<Integer> ans=printListFromTailToHead(list);
		for(int i=0;i<ans.size();i++)
			System.out.print(ans.get(i)+" ");
		System.out.println();
	}
}

