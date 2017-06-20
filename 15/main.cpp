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

	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL)
			return NULL;

		ListNode* next = NULL;
		ListNode* pre = NULL;
		//pre->pHead->next ---- pre<-pHead<-next
		while (pHead) {
			next = pHead->next;
			pHead->next = pre;

			pre = pHead;
			pHead = next;
		}
		return pre;
	}
};

int  main() {
	Solution so;
	vector<int> data;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		data.push_back(x);
	}

	LinkList L = new ListNode(NULL);
	so.CreateList(L, data);
	ListNode* newList = so.ReverseList(L);
	while (newList) {
		cout << newList->val << " ";
		newList = newList->next;
	}
	getchar(); getchar();
	return 0;
}