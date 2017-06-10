package hi;

import java.util.Stack;

public class solution {
	Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
    
    public void push(int node) {
        stack1.push(node);
    }
    
    public int pop() {
    	if(stack2.empty())
    		while(!stack1.empty())
    			stack2.push(stack1.pop());
    	return stack2.pop();
    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		solution so=new solution();
		for(int i=1;i<=3;i++)
			so.push(i);
		System.out.print(so.pop()+" "+so.pop()+" ");
		so.push(4);
		System.out.print(so.pop()+" ");
		so.push(5);
		System.out.println(so.pop()+" "+so.pop());
	}

}
