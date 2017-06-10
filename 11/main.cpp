#include <iostream>
using namespace std;
class Solution {
public:
	int  NumberOf1(int n) {
		int cnt = 0;
		while (n != 0) {
			n = n&(n - 1);
			cnt++;
		}
		return cnt;
	}
};

int  main() {
	Solution so;
	int num;
	cin >> num;
	int cnt = so.NumberOf1(num);
	cout << "the num is: " << cnt << endl;
	getchar(); getchar();
	return 0;
}