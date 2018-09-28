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

// This function finds for the key which needs to
// be deleted and return nothing if it doesn't have the key
void delNode( struct Node** head_ref , int key)
{
    struct Node* temp = *head_ref , *prev;
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
    if(temp == NULL) return;

    // Remove the deletion key and point to its next node
    prev->next = temp->next;
    free(temp);  // Free memory after deletion


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





