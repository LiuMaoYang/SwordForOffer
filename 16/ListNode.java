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
	
	public static ListNode Merge(ListNode list1,ListNode list2) {
        if(list1==null && list2==null)
        	return null;
        else if(list1==null)
        	return list2;
        else if(list2==null)
        	return list1;
        
        if(list1.val>list2.val){
        	list2.next=Merge(list1, list2.next);
        	return list2;
        }
        else{
        	list1.next=Merge(list1.next, list2);
        	return list1;
        }
    }

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		ArrayList<Integer> data1=new ArrayList<Integer>();
		ArrayList<Integer> data2=new ArrayList<Integer>();
		int cnt=in.nextInt();
		for(int i=0;i<cnt;i++)
			data1.add(in.nextInt());
		
		ListNode l1=new ListNode(0);
		CreateList(l1, data1);
		
		cnt=in.nextInt();
		for(int i=0;i<cnt;i++)
			data2.add(in.nextInt());
		
		ListNode l2=new ListNode(0);
		CreateList(l2, data2);
		
		ListNode newL=Merge(l1, l2);
		while(newL!=null){
			System.out.print(newL.val+" ");//+" ", not +' '
			newL=newL.next;
		}
		System.out.println();
	}
}
