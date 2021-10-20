#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){
    struct node *head1 = NULL, *head2 = NULL;
    struct node *temp1 = NULL, *temp2 = NULL;
    int i, n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the elements of first list : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = data;
        temp1->next = head1;
        head1 = temp1;
    }
    printf("Enter the elements of second list : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        temp2 = (struct node*)malloc(sizeof(struct node));
        temp2->data = data;
        temp2->next = head2;
        head2 = temp2;
    }
    temp1 = head1;
    temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
            break;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 == NULL)
        printf("The two lists are equal.\n");
    else
        printf("The two lists are not equal.\n");
}
