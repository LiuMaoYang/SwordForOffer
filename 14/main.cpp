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

	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		ListNode* pAhead = pListHead;
		ListNode* pBhead = pListHead;
		if (k == 0 || pListHead == NULL)
			return NULL;
		int cnt = 0;
		while (pAhead != NULL) {
			pAhead = pAhead->next;
			cnt++;
		}
		if (k > cnt)
			return NULL;

		for (int i = 0; i < cnt - k; i++)
			pBhead = pBhead->next;
		return pBhead;
	}
};

int  main() {
	Solution so;
	vector<int> data;
	int n, x, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		data.push_back(x);
	}

	LinkList L = new ListNode(NULL);
	so.CreateList(L, data);
	cin >> k;
	ListNode* kl=so.FindKthToTail(L, k);
	cout << "The kth number to tail is: " << kl->val << endl;
	getchar(); getchar();
	return 0;
}