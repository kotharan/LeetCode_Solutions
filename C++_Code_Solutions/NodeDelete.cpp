#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data)  // O(1) :: Time complexity
{
    //allocate a new_node
    Node* new_node =(struct Node*)malloc(sizeof(struct Node));
    // Assign Data
    new_node->data = new_data;
    // Point to current head data
    new_node->next = (*head_ref);
    // Point head to the newly added node
    (*head_ref) = new_node;

}

void delNode( struct Node** head , int data)
{

}


int main()
{
    struct Node* head = NULL;
    push(&head,6);
    push(&head,5);
    cout<<head->data;



    cout<<"Hello";
    return 0;
}





