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

	void Mirror(TreeNode *pRoot) {
		if (pRoot != NULL) {
			TreeNode *temp = pRoot->left;
			pRoot->left = pRoot->right;
			pRoot->right = temp;
			Mirror(pRoot->left);
			Mirror(pRoot->right);
		}
	}

	void preOrder(BiTree &T) {
		if (T != NULL) {
			cout << T->val<<" ";
			preOrder(T->left);
			preOrder(T->right);
		}
	}
};

int main() {
	cout << "Create a binary tree, -1 stand for empty tree" << endl;
	Solution so;
	BiTree T = new TreeNode(NULL);
	so.createBiTree(T);
	//2 1 -1 4 -1 -1 5 3 -1 -1 -1
	so.preOrder(T);
	//2 1 4 5 3
	cout << endl << "Mirror Tree:" << endl;
	so.Mirror(T);
	so.preOrder(T);
	//2 5 3 1 4

	getchar(); getchar();
	return 0;
}



