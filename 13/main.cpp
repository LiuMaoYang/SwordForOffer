#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		//vector<int> odd;
		//vector<int> even;
		//for (int i = 0; i < array.size(); i++) {
		//	if (array[i] % 2 == 0)
		//		even.push_back(array[i]);
		//	else
		//		odd.push_back(array[i]);
		//}
		//odd.insert(odd.end(), even.begin(), even.end());
		//array = odd;
		int cnt = 0;
		int len = array.size();
		while (cnt++ < len) {
			if (array[cnt] % 2 == 0) {
				array.push_back(array[cnt]);
				array.erase(array.begin()+cnt);
			}
		}
	}
};

int  main() {
	Solution so;
	vector<int> vec;
	int x;
	cin >> x;
	while (x!=0){
		vec.push_back(x);
		cin >> x;
	}
	so.reOrderArray(vec);

	cout << "the sorted sequence is: ";
	for (int i=0; i<vec.size(); i++)
		cout << vec[i];
	cout << endl;

	getchar(); getchar();
	return 0;
}