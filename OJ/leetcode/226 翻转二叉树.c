//https://leetcode.cn/problems/invert-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root==NULL)
        return NULL;
    struct TreeNode* leftnode=invertTree(root->left);
    struct TreeNode* rightnode=invertTree(root->right);

    root->left=rightnode;
    root->right=leftnode;

    return root;
}

