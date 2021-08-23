#include <iostream>
using namespace std;
int main()
{
    int n, c, j;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c = a[i];
        j = i;
        while ((j > 0) && (a[j - 1] > c)) //insertion sort
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = c;
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int l = 0, h = n - 1, s, m, f = 0;
    cout << "enter search number";
    cin >> s;
    m = (l + h) / 2;
    while (l < h)
    {
        if (a[m] > s)
        {
            h = m - 1;
        }
        else if (a[m] == s)
        {
            //cout << "number is found";
            f = 1;
            break;
        }
        else
        {
            l = m + 1;
        }
        m = (l + h) / 2;
    }
    if ((a[l] == s) && (f == 0))
    {
        cout << "number is found";
        f = 1;
    }
    else if (f == 0)
        cout << "\nnot found";
    return 0;
}