// Done by >> Anand Kothari
// Runtime is O(n) , although it could also be done in O(1) as the delOne function does

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

    void push( Node** head_ref, int new_data)  // O(1) :: Runtime
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

 // This runs with O(1) Runtime
    void delOne(Node* node)
    {
        Node* temp = node->next;
        node->data = node->next->data;
        node->next = temp->next;
        free(temp);
    }

int main()
{
     Node* head = NULL;
    push(&head,8);  // Inserts value to the start of the list
    push(&head,7);
    push(&head,6);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    cout<<"List is :: " ;
    printList(head);
    cout<<endl;

    cout<<"After deleting the node the list is :: ";
    delNode(&head,6);
    delOne(head->next);
     printList(head);


    return 0;
}





