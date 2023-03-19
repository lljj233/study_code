//https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tpId=13&&tqId=11167&rp=2&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pListHead ListNode类 
 * @param k int整型 
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    // write code here
    if(pListHead==NULL)
        return NULL;
    struct ListNode* slow,*fast;
    slow=fast=pListHead;
    while(--k)
    {
        fast=fast->next;
        if(fast==NULL)
        {
           return NULL;
        }
    }
    while(fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

