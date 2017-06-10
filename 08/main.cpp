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
		v.push_back(2);//��1����һ��������2��������
		for (int i = 3; i <= number; i++)
			v.push_back(v[i - 2] + v[i - 1]);//��n��������ǰn-2��������2��/����ǰn-1��������1��
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