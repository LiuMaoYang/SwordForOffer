#include <iostream>
#include <vector>

using namespace std;

typedef struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}TreeNode, *BiTree;

class Solution {
public:

	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		int len = pre.size();
		if (len == 0)
			return NULL;

		//根节点为前序首位
		TreeNode* head = new TreeNode(pre[0]);
		
		//找到中序中的根节点位置
		int root = 0;
		for (int i = 0; i < len; i++) {
			if (vin[i] == pre[0]) {
				root = i;
				break;
			}
		}

		vector<int> left_vin(vin.begin(), vin.begin() + root);
		vector<int> right_vin(vin.begin() + root + 1, vin.end());
		vector<int> left_pre(pre.begin() + 1, pre.begin() + root + 1);
		vector<int> right_pre(pre.begin() + root + 1, pre.end());

		head->left = reConstructBinaryTree(left_pre, left_vin);
		head->right = reConstructBinaryTree(right_pre, right_vin);

		return head;
	}

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

	void preOrder(BiTree &T) {
		if (T) {
			cout << T->val;
			preOrder(T->left);
			preOrder(T->right);
		}
		else {
			cout << "";
		}
	}

	void inOrder(BiTree &T) {
		if (T) {
			inOrder(T->left);
			cout << T->val;
			inOrder(T->right);
		}
		else {
			cout << "";
		}
	}

	void postOrder(BiTree &T) {
		if (T) {
			postOrder(T->left);
			postOrder(T->right);
			cout << T->val;
		}
		else {
			cout << "";
		}
	}
};

int main() {
	cout << "Create a binary tree, -1 stand for empty tree" << endl;
	Solution so;
	//BiTree T = new TreeNode(NULL);
	//so.createBiTree(T);
	//2 1 - 1 4 - 1 - 1 5 3 - 1 - 1 - 1

	int pre[] = {2,1,4,5,3};
	int in[] = {1,4,2,3,5};
	vector<int> Pre(pre, pre + 5);
	vector<int> In(in, in + 5);
	BiTree T = so.reConstructBinaryTree(Pre, In);

	cout << "PreOrder：" << endl;
	so.preOrder(T);
	cout << endl;
	//21453

	cout << "InOrder：" << endl;
	so.inOrder(T);
	cout << endl;
	//14235

	cout << "PostOrder:" << endl;
	so.postOrder(T);
	cout << endl;
	//41352

	getchar(); getchar();
	return 0;
}



