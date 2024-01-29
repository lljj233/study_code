//https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=60&&tqId=29483&rp=1&ru=/activity/oj&qru=/ta/tsing-kaoyan/question-ranking

#include<stdio.h>

struct TreeNode
{
    struct TreeNode* left;
    struct TreeNode* right;
    char val;
};

struct TreeNode* CreateTree(char* array, int* pi)
{
    if(array[(*pi)] == '#')
    {
        (*pi)++;
        return NULL;
    }
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = array[(*pi)++];
    root->left = CreateTree(array, pi);
    root->right = CreateTree(array, pi);
    return root;
}

void InOrder(struct TreeNode* root)
{
    if(root == NULL)
        return;
    InOrder(root->left);
    printf("%c ",root->val);
    InOrder(root->right);
}

int main()
{
    char array[100];
    scanf("%s",array);

    int i=0;
    struct TreeNode* root = CreateTree(array, &i);
    InOrder(root);

    return 0;
}

