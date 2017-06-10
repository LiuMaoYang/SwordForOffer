#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int rectCover(int number) {
		if (number <= 0)
			return 0;
		else if (number == 1)
			return 1;
		else if (number == 2)
			return 2;
		vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		for (int i = 3; i <= number; i++)
			v.push_back(v[i - 1] + v[i - 2]);
		return v[number];
	}
};

int main(){
	Solution so;
	int n;
	cin >> n;
	int f = so.rectCover(n);
	cout << "Total method: " << f << endl;

	getchar(); getchar();
	return 0;
}