// Done By >> Anand Kothari

#include <iostream>

using namespace std;

struct ListNode {
int val;
ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

// If say there are five node |2|->|3|->|4|->|5|->|6|

// Let's say we need to delete Node 3, what the code does is                          /----|
// Line 1 [stores the value of the node next to 3 into the node 3 position ] :: |2|->|4|->|4|->|5|->|6|

// Line 2 [Changes the pointer from the second node directly to the fourth node] :: |2|-> |4| -x>|4| -x> |5|->|6|
//                                                                                         |_____________/

class Solution{
public:
    void deleteNode(ListNode *node){

    node->val = node->next->val;
    node->next = node->next->next;

    }

};


