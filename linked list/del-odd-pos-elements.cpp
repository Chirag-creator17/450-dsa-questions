#include <bits/stdc++.h>
using namespace std;
struct LLNode
{
    int data;
    struct LLNode *next;
};
/* Function to insertAtBeginning a node */
void insertAtBeginning(struct LLNode **head, int dataToBeInserted)
{
    struct LLNode *curr = new LLNode;
    curr->data = dataToBeInserted;
    curr->next = NULL;
    if (*head == NULL)
        *head = curr; //if this is first node make this as head of list

    else
    {
        curr->next = *head; //else make the curr (new) node's next point to head and make this new node a the head
        *head = curr;
    }

    //O(1) constant time
}
// delete odd position elements from linked list
void deleteOddPosElements(struct LLNode **head)
{
    struct LLNode *curr = *head;
    struct LLNode *prev = NULL;
    struct LLNode *temp = NULL;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
   curr = *head;
    prev = NULL;
    while (curr != NULL)
    {
        if (count % 2 == 1)
        {
            if (prev == NULL)
                *head = curr->next;
            else
                prev->next = curr->next;
            temp = curr;
            curr = curr->next;
            delete temp;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}
//display linked list
void display(struct LLNode **node)
{
    struct LLNode *temp = *node;
    while (temp != NULL)
    {
        if (temp->next != NULL)
            cout << temp->data << "->";
        else
            cout << temp->data;

        temp = temp->next; //move to next node
    }
    //O(number of nodes)
    cout << endl;
}
//function to delete node at given pos
void deleteNode(struct LLNode **head_ref, int pos)
{
    //
    if (*head_ref == NULL)
    {
        return;
    }
    //temp to store head
    struct LLNode *temp = *head_ref;
    //Delete head node
    if (pos == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    //store previous of to be deleted node
    for (int i = 0; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return;
    }
    //delete node at pos (next of pos-1)
    struct LLNode *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
//Main function
int main()
{
    //Input list
    struct LLNode *head = NULL;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 8);
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 2);

    cout << "Input linked list: ";
    display(&head);
    // int k;
    // cout << "Enter pos to be deleted: ";
    // cin >> k;
    // //delete node at pos k
    // deleteNode(&head, k);
    deleteOddPosElements(&head);
    cout << "Output linked list: ";
    display(&head);
    return 0;
}