package h;

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
	
    public static ListNode FindKthToTail(ListNode head,int k) {
        	ListNode node=head;
	    	int cnt=0;
	    	while(node!=null){
	    		node=node.next;
	    		cnt++;
	    	}
        
	    	if(cnt<k)
	    		return null;
	    	
	    	ListNode node1=head;
	    	for(int i=0;i<cnt-k;i++){
	    		node1=node1.next;
	    	}
	    	return node1;
    }


	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		ArrayList<Integer> data=new ArrayList<Integer>();
		int cnt=in.nextInt();
		for(int i=0;i<cnt;i++)
			data.add(in.nextInt());
		
		ListNode l=new ListNode(0);
		CreateList(l, data);
		ListNode k=FindKthToTail(l, in.nextInt());
		System.out.println(k.val);
	}
}
