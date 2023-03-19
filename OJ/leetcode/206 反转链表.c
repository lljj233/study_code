//https://leetcode.cn/problems/reverse-linked-list/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL)
        return NULL;
    struct ListNode* n1=NULL,*n2=head,* n3=n2->next;
    while(n2)
    {
        n2->next=n1;
        n1=n2;
        n2=n3;
        if(n3)
            n3=n3->next;
    }
    return n1;
}

