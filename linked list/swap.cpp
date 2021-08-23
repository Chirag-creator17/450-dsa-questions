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
};
ListNode *swapPairs(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        swap(temp->val, temp->next->val);
        temp = temp->next->next;
    }
    return head;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}