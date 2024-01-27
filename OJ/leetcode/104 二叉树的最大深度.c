//https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root==NULL)
        return 0;

    int leftnode=maxDepth(root->left);
    int rightnode=maxDepth(root->right);

    return leftnode > rightnode ? leftnode+1 : rightnode+1;
}

