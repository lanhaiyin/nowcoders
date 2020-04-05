输入一个链表，按链表从尾到头的顺序返回一个ArrayList。

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        ListNode* cur = head;
        int len = 0;
        while(cur)
        {
            cur = cur->next;
            len++;
        }
        vector<int>ArrayList(len);
        len--;
        cur = head;
        while(cur)
        {
            ArrayList[len--] = cur->val;
            cur = cur->next;
        }
        return ArrayList;
    }
};
