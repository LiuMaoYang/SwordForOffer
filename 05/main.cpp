#include <iostream>
#include <stack>
#include <queue>

using namespace std;
class Solution{
	public:
		void push(int node) {
			stack1.push(node);
		}

		int pop() {
			if (stack2.empty()){
				while (!stack1.empty()){
					stack2.push(stack1.top());
					stack1.pop();
				}
			}
			int tmp = stack2.top();
			stack2.pop();
			return tmp;
		}

	private:
		stack<int> stack1;
		stack<int> stack2;
};

int main(){
	Solution so;
	int x,y;
	so.push(1);
	so.push(2);
	so.push(3);
	x = so.pop();
	y = so.pop();
	cout << x << " " << y<<" ";
	so.push(4);
	x = so.pop();
	cout << x << " ";
	so.push(5);
	x = so.pop();
	y = so.pop();
	cout << x << " " << y << " "<<endl;

	getchar();
	return 0;
}