#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
};
struct node *top=NULL;
void push(char data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=top;
    top=temp;
}
char pop()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    struct node *temp=top;
    top=top->next;
    char data=temp->data;
    free(temp);
    return data;
}
void reverse_stack_using_recursion(struct node *top)
{
    if(top==NULL)
        return;
    reverse_stack_using_recursion(top->next);
    push(top->data);
}
void print_stack()
{
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    push('a');
    push('b');
    push('c');
    push('d');
    push('e');
    push('f');
    push('g');
    push('h');
    reverse_stack_using_recursion(top);
    print_stack();
    return 0;
}
