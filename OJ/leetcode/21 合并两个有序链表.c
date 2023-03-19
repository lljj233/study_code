//https://leetcode.cn/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* n1=list1,*n2=list2;
    struct ListNode* head=NULL,*tail=NULL;
    if(list1==NULL)
        return list2;
    if(list2==NULL)
        return list1;
    while(n1 && n2)
    {
        if(n1->val < n2->val)
        {
            if(head==NULL)
            {
                head=tail=n1;
            }
            else
            {
                tail->next=n1;
                tail=tail->next;
            }
            n1=n1->next;
        }
        else
        {
            if(head==NULL)
            {
                head=tail=n2;
            }
            else
            {
                tail->next=n2;
                tail=tail->next;
            }
            n2=n2->next;
        }
    }
    if(n1)
    {
        tail->next=n1;
    }
    if(n2)
    {
        tail->next=n2;
    }
    return head;
}

