#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int jumpFloor(int number) {
		if (number < 0)
			return NULL;
		else if (number == 0)
			return 0;
		vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(2);//跳1级有一种跳发，2级有两种
		for (int i = 3; i <= number; i++)
			v.push_back(v[i - 2] + v[i - 1]);//跳n级：跳到前n-2级，再跳2格/跳到前n-1级，再跳1格
		return v[number];
	}
};

int main(){
	Solution so;
	int n;
	cin >> n;
	int f = so.jumpFloor(n);
	cout << "Total method: " << f << endl;

	getchar(); getchar();
	return 0;
}