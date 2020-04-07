题目描述
输入一个链表，反转链表后，输出新链表的表头。


/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* newhead = new ListNode(0);
        newhead->next     = nullptr;
        ListNode* newcur  = newhead->next;
        while(pHead)
        {
            newhead->next       = pHead;
            pHead               = pHead->next;
            newhead->next->next = newcur;
            newcur              = newhead->next;
        }
        newcur = newhead->next;
        delete newhead;
        return newcur;
    }
};
