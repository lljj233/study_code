//https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
#include <cstddef>
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        struct ListNode* gGuard,*gTail,*lGuard,*lTail;
        gGuard=gTail=(struct ListNode*)malloc(sizeof(struct ListNode));
        lGuard=lTail=(struct ListNode*)malloc(sizeof(struct ListNode));
        gTail->next=lTail->next=NULL;
        struct ListNode* cur=pHead;
        while(cur)
        {
            if(cur->val < x)
            {
                lTail->next=cur;
                lTail=lTail->next;
            }
            else
            {
                gTail->next=cur;
                gTail=gTail->next;
            }
            cur=cur->next;
        }
        lTail->next=gGuard->next;
        gTail->next=NULL;
        pHead=lGuard->next;
        free(gGuard);
        free(lGuard);
        return pHead;
    }
};

