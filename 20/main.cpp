#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
	vector<int> stack;

public:
	void push(int value) {
		stack.push_back(value);
	}
	void pop() {
		stack.pop_back();
	}
	int top() {
		//vector<int>::iterator it = stack.end();
		return stack.back();
	}
	int min() {
		vector<int>::iterator it = stack.begin();
		int min = *it;
		for (; it < stack.end(); it++) 
			if (*it < min)
				min = *it;
		return min;
	}
};

int main() {
	Solution so;
	
	getchar(); getchar();
	return 0;
}



