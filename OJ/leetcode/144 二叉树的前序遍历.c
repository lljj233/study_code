//https://leetcode.cn/problems/binary-tree-preorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int TreeSize(struct TreeNode* root)
{
    if(root==NULL)
        return 0;
    int leftnode=TreeSize(root->left);
    int rightnode=TreeSize(root->right);
    return leftnode+rightnode+1;
}

void PreOrder(struct TreeNode* root, int* array, int* i)
{
	if (root == NULL)
		return;
	array[(*i)++]=root->val;
	PreOrder(root->left,array,i);
	PreOrder(root->right,array,i);

}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=TreeSize(root);
    int* array=(int*)malloc((*returnSize)*sizeof(int));
    int i=0;
    PreOrder(root,array,&i);
    return array;
}

