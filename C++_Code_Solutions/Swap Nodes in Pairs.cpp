//Done by >> Anand Kothari
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
       // Will Run till it has pairs and would ignore the single digits at the end
        for( ListNode *p = head; p && p->next ;p = p->next->next)
        {
            int n = p->val;
            p->val = p->next->val;
            p->next->val = n;
        }
        return head;
    }
};
