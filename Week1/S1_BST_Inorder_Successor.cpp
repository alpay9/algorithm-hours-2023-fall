#include <iostream>
//Alpay Nacar
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;
	TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr) : val(val), left(left), right(right), parent(nullptr) {}
	void insert(int val) { // testcase purposes
		if (val < this->val) {
			if (this->left != nullptr) this->left->insert(val);
			else {
				this->left = new TreeNode(val);
				this->left->parent = this;
			}
		}
		else if (this->val < val) {
			if (this->right != nullptr) this->right->insert(val);
			else {
				this->right = new TreeNode(val);
				this->right->parent = this;
			}
		}
		else throw "duplicate val";
	}

	TreeNode* findInorderSuccessor() {
		TreeNode* ptr = this;
		// if right sub tree exists
		if (ptr->right) {
			// return min of right sub tree
			ptr = ptr->right;
			while (ptr->left) ptr = ptr->left;
			return ptr;
		}
		else {
			int curr_val = ptr->val;
			// check if there exists a bigger value on the upper side of the tree
			while (ptr->parent) {
				ptr = ptr->parent;
				if (ptr->val > curr_val) return ptr;
			}
			// if not, input node is the biggest node of the BST
			return nullptr;
		}
	}
};

int main() {
	TreeNode* root = new TreeNode(4);
	root->insert(2); //       4 
	root->insert(1); //     /   \ 
	root->insert(3); //    2     6 
	root->insert(6); //   /\    / 
	root->insert(5); //  1  3  5 

	// Testcase 1: there exists only one node in right sub tree
	if (root->left->findInorderSuccessor()->val != 3) cout << "Testcase 1 failed.\n";

	// Testcase 2: there exists right sub tree with more than one node
	else if (root->findInorderSuccessor()->val != 5) cout << "Testcase 2 failed.\n";

	// Testcase 3: right child not exists and parent is bigger
	else if (root->left->left->findInorderSuccessor()->val != 2) cout << "Testcase 3 failed.\n";

	// Testcase 4: right child not exists and curr parent is smaller
	else if (root->left->right->findInorderSuccessor()->val != 4) cout << "Testcase 4 failed.\n";

	// Testcase 5: curr val is the max val of BST
	else if (root->right->findInorderSuccessor() != nullptr) cout << "Testcase 5 failed.\n";

	else cout << "All testcases passed.";

	return 0;
}