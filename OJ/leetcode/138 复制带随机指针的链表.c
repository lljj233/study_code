//https://leetcode.cn/problems/copy-list-with-random-pointer/submissions/

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    //1.在原节点后插入拷贝节点
    struct Node* cur=head;
    while(cur)
    {
        struct Node* next=cur->next;
        struct Node* copy=(struct Node*)malloc(sizeof(struct Node));
        copy->val=cur->val;
        cur->next=copy;
        copy->next=next;
        cur=next;
    }
    //2.处理拷贝节点的random
    cur=head;
    while(cur)
    {
        struct Node* copy=cur->next;
        if(cur->random==NULL)
            copy->random=NULL;
        else
            copy->random=cur->random->next;
        cur=cur->next->next;
    }
    //3.将拷贝节点解除并链接，同时恢复原链表
    struct Node* CopyHead=NULL,*CopyTail=NULL;
    cur=head;
    while(cur)
    {
        struct Node* copy=cur->next;
        struct Node* next=copy->next;
        if(CopyHead==NULL)
            CopyHead=CopyTail=copy;
        else
        {
            CopyTail->next=copy;
            CopyTail=CopyTail->next;        
        }
        cur->next=next;
        cur=next;
    }
    return CopyHead;
}

