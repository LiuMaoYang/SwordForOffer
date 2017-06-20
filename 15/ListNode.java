package hh;

import java.util.ArrayList;
import java.util.Scanner;

public class ListNode {
	int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }

	public static void CreateList(ListNode L,ArrayList<Integer> data){
		ListNode temp1=new ListNode(0);
		temp1=L;
		temp1.val=data.get(0);
		for(int i=1;i<data.size();i++){
			ListNode temp2=new ListNode(data.get(i));
			temp1.next=temp2;
			temp1=temp2;
		}
	}
	
	public static ListNode ReverseList(ListNode head){
		if(head==null)
			return null;
		
		ListNode pre=null;
		ListNode next=null;
		while(head!=null){
			next=head.next;
			head.next=pre;
			
			pre=head;
			head=next;
		}
		return pre;
	}

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		ArrayList<Integer> data=new ArrayList<Integer>();
		int cnt=in.nextInt();
		for(int i=0;i<cnt;i++)
			data.add(in.nextInt());
		
		ListNode l=new ListNode(0);
		CreateList(l, data);
		ListNode newL=ReverseList(l);
		while(newL!=null){
			System.out.print(newL.val+" ");//+" ", not +' '
			newL=newL.next;
		}
		System.out.println();
	}
}
