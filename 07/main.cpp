#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int Fibonacci(int n) {
		if (n < 0)
			return NULL;
		else if (n == 0 || n == 1)
			return n;
		
		vector<int> f;
		f.push_back(0);
		f.push_back(1);
		for (int i = 2; i <= n; i++)
			f.push_back(f[i - 1] + f[i - 2]);
		return f[n];
	}
};

int main(){
	Solution so;
	int n;
	cin >> n;
	int f = so.Fibonacci(n);
	cout << "Item n of the Fibonacci sequence:" << f << endl;

	getchar(); getchar();
	return 0;
}