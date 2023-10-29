# BST Inorder Successor

### Prerequisities:
[Binary Search Tree (BST)](Prereq_BST.md)

### Question:
In a Binary Search Tree (BST), an Inorder Successor of a node is defined as the node with the smallest value greater than the key of the input node. Given a node inputNode in a BST, you’re asked to write a function findInOrderSuccessor that returns the Inorder Successor of inputNode. If inputNode has no Inorder Successor, return null. <br>
<details>
	<summary>Example</summary> <!-- Change dashes in this example to spaces -->
	&emsp; --2--  In this example: <br>
	&emsp; -/-\-  inorder successor of node 1 is node 2 <br>
	&emsp; 1---3  inorder successor of node 2 is node 3 <br>
</details>

```c++
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;
	TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr) : val(val), left(left), right(right), parent(nullptr) {}
	TreeNode* findInorderSuccessor() {
		// Write your solution here
	}
};
```

[Solution](S1_BST_Inorder_Successor.cpp)
