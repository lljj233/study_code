//https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&&tqId=29370&rp=1&ru=/activity/oj&qru=/ta/2016test/question-ranking

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
  public:
    struct ListNode* reverseList(struct ListNode* head) {
        if (head == NULL)
            return NULL;
        struct ListNode* n1 = NULL, *n2 = head, * n3 = n2->next;
        while (n2) {
            n2->next = n1;
            n1 = n2;
            n2 = n3;
            if (n3)
                n3 = n3->next;
        }
        return n1;
    }
    struct ListNode* middleNode(struct ListNode* head) {
        struct ListNode* slow, *fast;
        slow = fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool chkPalindrome(ListNode* head) {
        struct ListNode* mid=middleNode(head);
        struct ListNode* rhead=reverseList(mid);
        while(head && rhead)
        {
            if(head->val!=rhead->val)
                return false;
            head=head->next;
            rhead=rhead->next;
        }
        return true;
    }
};

