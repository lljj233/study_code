//https://leetcode.cn/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* slow,* fast;
    slow=fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            struct ListNode* meet=slow;
            struct ListNode* start=head;

            while(meet!=start)
            {
                meet=meet->next;
                start=start->next;
            }
            return meet;
        }
    }
    return NULL;
}

