#include <iostream>
#include <vector>
using namespace std;

typedef struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL) {}
}ListNode, *LinkList;

class Solution {
public:
	void CreateList(LinkList &L, vector<int> data) {
		LinkList temp1, temp2;
		temp1 = L;
		temp1->val = data[0];
		for (int i = 1; i < data.size(); i++) {
			temp2 = new ListNode(data[i]);
			temp1->next = temp2;
			temp1 = temp2;
		}
	}

	ListNode* Merge(ListNode* pHead1, ListNode* pHead2){
		if (pHead1 == NULL && pHead2 == NULL)
			return NULL;
		else if (pHead1 == NULL)
			return pHead2;
		else if (pHead2 == NULL)
			return pHead1;
		
		if (pHead1->val > pHead2->val) {
			pHead2->next = Merge(pHead2->next, pHead1);
			return pHead2;
		}
		else {
			pHead1->next = Merge(pHead1->next, pHead2);
			return pHead1;
		}
	}
};

int  main() {
	Solution so;
	vector<int> data1, data2;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		data1.push_back(x);
	}

	LinkList L1 = new ListNode(NULL);
	so.CreateList(L1, data1);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		data2.push_back(x);
	}

	LinkList L2 = new ListNode(NULL);
	so.CreateList(L2, data2);

	ListNode* newList = so.Merge(L1, L2);
	while (newList) {
		cout << newList->val << " ";
		newList = newList->next;
	}
	cout << endl;

	getchar(); getchar();
	return 0;
}