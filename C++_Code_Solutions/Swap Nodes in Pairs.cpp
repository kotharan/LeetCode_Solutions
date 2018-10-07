
/* 
Given a linked list, swap every two adjacent nodes and return its head.

Example:

Given 1->2->3->4, you should return the list as 2->1->4->3.
Note:

Your algorithm should use only constant extra space.
You may not modify the values in the list's nodes, only nodes itself may be changed.
Done by >> Anand Kothari
 */

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
