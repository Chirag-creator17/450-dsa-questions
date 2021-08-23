#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f(i, a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define pb push_back
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return head;

    ListNode *odd = head;
    ListNode *oddHead = head;
    ListNode *even = head->next;
    ListNode *evenHead = head->next;

    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = even->next;

        even->next = odd->next;
        even = odd->next;
    }

    odd->next = evenHead;
    return oddHead;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}