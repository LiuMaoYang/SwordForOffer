#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int jumpFloorII(int number) {
		if (number <= 0)
			return 0;
		else if (number == 1)
			return 1;
		else
			return 2 * jumpFloorII(number - 1);
	}
};

int main(){
	Solution so;
	int n;
	cin >> n;
	int f = so.jumpFloorII(n);
	cout << "Total method: " << f << endl;

	getchar(); getchar();
	return 0;
}