#include <iostream>

using namespace std;

typedef struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}TreeNode, *BiTree;

class Solution {
public:
	void createBiTree(BiTree &T) {
		int x;
		cin >> x;
		if (x == -1) {
			T = NULL;
		}
		else {
			//PreOrder create a binary tree
			T = new TreeNode(NULL);
			T->val = x;
			createBiTree(T->left);
			createBiTree(T->right);
		}
	}

	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
		if (pRoot1 == NULL || pRoot2 == NULL)
			return false;
		return isSubtree(pRoot1, pRoot2)
			|| HasSubtree(pRoot1->left, pRoot2)
			|| HasSubtree(pRoot1->right, pRoot2);
	}

	bool isSubtree(TreeNode* pRootA, TreeNode* pRootB) {
		if (pRootB == NULL)
			return true;
		if (pRootA == NULL)
			return false;
		if (pRootA->val == pRootB->val)
			return isSubtree(pRootA->left, pRootB->left)
			&& isSubtree(pRootA->right, pRootB->right);
		else
			return false;
	}
};

int main() {
	cout << "Create a binary tree, -1 stand for empty tree" << endl;
	Solution so;
	BiTree T1 = new TreeNode(NULL);
	so.createBiTree(T1);
	BiTree T2 = new TreeNode(NULL);
	so.createBiTree(T2);
	//2 1 - 1 4 - 1 - 1 5 3 - 1 - 1 - 1

	if (so.HasSubtree(T1, T2))
		cout << "T2 is a subTree of T1" << endl;
	else
		cout << "T2 is NOT a subTree of T1" << endl;

	getchar(); getchar();
	return 0;
}



