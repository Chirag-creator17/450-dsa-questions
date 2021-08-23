#include <bits/stdc++.h>
using namespace std;
int c = 0;
struct node
{
    int data;
    struct node *next;
} * head, *last, *temp, *g;
void insert(int n)
{

    temp = new node;
    cout << "Enter data : ";
    cin >> temp->data;
    if (n == 1)
    {
        temp->next = head;
        head = temp;
    }
    else if (n > 1 && c + 1 >= n)
    {
        g = head;
        for (int i = 1; i <= n - 2; i++)
            g = g->next;
        temp->next = g->next;
        g->next = temp;
    }
    c++;
}
void append()
{
    if (head == NULL)
    {
        head = temp = last = new node;
    }
    else
    {
        temp = new node;
        last->next = temp;
        last = last->next;
    }
    cout << "Enter data : ";
    cin >> last->data;
    last->next = NULL;
    c++;
}
void del(int n)
{
    if (c > 0)
    {
        if (n == 1)
        {
            temp = head;
            head = head->next;
            free(temp);
            c--;
        }
        else if (n > 1 && n <= c)
        {
            temp = head;
            for (int i = 1; i <= n - 2; i++)
                temp = temp->next;
            g = temp->next;
            temp->next = temp->next->next;
            free(g);
            c--;
        }
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void recdisplay(struct node *p)
{
    if (p == NULL)
    {
        cout << endl;
        return;
    }
    cout << p->data << " ";
    recdisplay(p->next);
}
int count()
{
    int f = 0;
    temp = head;
    while (temp != NULL)
    {
        f++;
        temp = temp->next;
    }
    return f;
}
void search(int n)
{
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == n)
        {
            cout << "Found the number" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not found " << endl
         << endl;
    return;
}
void rev()
{
    struct node *prev, *current, *n;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        n = current->next;
        current->next = prev;
        prev = current;
        current = n;
    }
    head = prev;
}
void revprint(struct node *p)
{
    if (p == NULL)
    {
        cout << endl;
        return;
    }
    revprint(p->next);
    cout << p->data << " ";
}
int main()
{
    int x;
    head = NULL;

    while (1)
    {
        cout << "1.Insert" << endl
             << "2.Append" << endl
             << "3.Delete" << endl
             << "4.Count" << endl
             << "5.Display" << endl
             << "6.Recursive Display" << endl
             << "7.Search" << endl
             << "8.Reverse" << endl
             << "9.Reverse print" << endl
             << "10.Exit" << endl;
        cout << "\nEnter choice : ";
        cin >> x;
        switch (x)
        {
        case 1:
        {
            int n;
            cout << "Enter position : ";
            cin >> n;
            insert(n);
            break;
        }
        case 2:
        {
            append();
            break;
        }
        case 3:
        {
            int n;
            cout << "Enter posotion to be deleted : ";
            cin >> n;
            del(n);
            break;
        }
        case 4:
        {
            cout << count() << endl
                 << endl;
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            recdisplay(head);
            cout<<endl;
            break;
        }
        case 7:
        {
            int n;
            cout << "Enter no to be seached : ";
            cin >> n;
            search(n);
            break;
        }
        case 8:
        {
            rev();
            break;
        }
        case 9:
        {
            revprint(head);
            cout<<endl;
            break;
        }
        case 10:
            exit(0);
        default:
        {
            cout << "Wrong Choice" << endl;
            break;
        }
        }
    }
    return 0;
}