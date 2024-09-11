#include <iostream>
#include <climits>

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isBSTUtil(TreeNode* node, int min, int max) {
    
    if (node == nullptr) 
        return true;

    // If this node violates the min/max constraint
    if (node->val < min || node->val > max)
        return false;

    // Otherwise check the subtrees recursively
    // tightening the min or max constraint
    return isBSTUtil(node->left, min, node->val - 1) && 
           isBSTUtil(node->right, node->val + 1, max);
}

bool isBST(TreeNode* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(25);

    if (isBST(root))
        std::cout << "The tree is a BST.\n";
    else
        std::cout << "The tree is not a BST.\n";

    // Clean up the allocated memory
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}