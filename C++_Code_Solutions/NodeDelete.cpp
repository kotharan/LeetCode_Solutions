#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void push( Node** head_ref, int new_data)  // O(1) :: Time complexity
{
    //allocate a new_node
    Node* new_node =(Node*)malloc(sizeof( Node));
    // Assign Data
    new_node->data = new_data;
    // Point to current head data
    new_node->next = (*head_ref);
    // Point head to the newly added node
    (*head_ref) = new_node;

}

// This function finds for the key which needs to
// be deleted and return nothing if it doesn't have the key
void delNode( Node** head_ref , int key)
{
     Node* temp = *head_ref , *prev;
    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // We need traverse the entire list for the key
    // and also keep track of the previous node
    // so that we could change the "prev->next" after deletion

    while(temp !=NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key not found
    if(temp == NULL)
    {
        cout<<" Couldn't find the given node current list is :: " <<endl;
        return;
    }

    // Remove the deletion key and point to its next node
    prev->next = temp->next;
    free(temp);  // Free memory after deletion

}

// This function is to print the updated linked
// list and return the list if no key is found

void printList(Node* node)  // Pass the head if entire list needs to be printed
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}


int main()
{
     Node* head = NULL;
    push(&head,6);  // Inserts value to the start of the list
    push(&head,5);
    push(&head,8);
    push(&head,9);

    cout<<"List is :: " ;
    printList(head);
    cout<<endl;

    cout<<"After deleting the node the list is :: ";
    delNode(&head,8);
     printList(head);
    return 0;
}





