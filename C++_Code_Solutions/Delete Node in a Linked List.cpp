/* 

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Given linked list -- head = [4,5,1,9], which looks like following:

    4 -> 5 -> 1 -> 9
Example 1:

Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list
             should become 4 -> 1 -> 9 after calling your function.
Example 2:

Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
Explanation: You are given the third node with value 1, the linked list
             should become 4 -> 5 -> 9 after calling your function.
Note:

The linked list will have at least two elements.
All of the nodes' values will be unique.
The given node will not be the tail and it will always be a valid node of the linked list.
Do not return anything from your function.
 */

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


