// Done by >> Anand Kothari
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
    ListNode* reverseList(ListNode* head) {

        // RECURSION METHOD

        //  if (head==NULL || head->next==NULL) return head;
        // ListNode *h = reverseList(head->next);
        // head->next->next = head;
        // head->next = NULL;
        // return h;


        // Iterative method
        ListNode *prev = NULL , *current = head, *next = NULL;

        while(current != NULL)
        {
           // Store next
            next = current->next;

            // Reverse current node's pointer
            current->next = prev;

            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev ;
        return head;
    }
};
