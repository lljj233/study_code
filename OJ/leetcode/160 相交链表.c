//https://leetcode.cn/problems/intersection-of-two-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* tailA = headA, * tailB = headB;
    int lenA = 1,lenB = 1;
    while(tailA->next)
    {
        tailA=tailA->next;
        lenA++;
    } 
    while(tailB->next)
    {
        tailB=tailB->next;
        lenB++;
    } 

    if(tailA!=tailB)
        return NULL;

    int gap = abs(lenA - lenB);
    struct ListNode* longest = headA,* shortest = headB;
    if(lenA < lenB)
    {
        longest = headB;
        shortest = headA;
    }

    while(gap--)
    {
        longest = longest->next;
    }
    while(longest!=shortest)
    {
        longest = longest->next;
        shortest = shortest->next;
    }

    return longest;
}

