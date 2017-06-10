#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.empty())
			return 0;
		for (int i = 1; i < rotateArray.size(); i++)
			if (rotateArray[i] < rotateArray[i - 1])
				return rotateArray[i];
			return rotateArray[0];
	}
};

int main(){
	Solution so;
	vector <int> vec;

	int x;
	cin >> x;
	while (x > 0){
		vec.push_back(x);
		cin >> x;
	}

	int y = so.minNumberInRotateArray(vec);
	cout << "The number is:"<<y << endl;

	getchar(); getchar();
	return 0;
}