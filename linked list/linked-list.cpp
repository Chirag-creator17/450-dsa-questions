#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    char name[10];
    struct node* next;
}*head,*last,*temp;
int main()
{
    int ch;
    head=new node;
    temp=head;
    do{
        last=temp;
        cout<<"enter name : ";
        cin>>last->name;
        cout<<"enter data : ";
        cin>>last->data;
        temp->next=new node;
        temp=temp->next;
        cout<<"enter ch";
        cin>>ch;
    }
    while(ch!=0);
    last->next=NULL;
    free(temp);
    while(head!=NULL){
        cout<<head->name<<" ";
        cout<<head->data<<endl;
        head=head->next;
    }
    return 0;
}