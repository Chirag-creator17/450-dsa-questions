#include <bits/stdc++.h>
using namespace std;
int minimumNumberOfSwaps(string S)
{
    int countLeft = 0, countRight = 0;
    int swap = 0, imbalance = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '[')
        {
            countLeft++;

            if (imbalance > 0)
            {
                swap += imbalance;
                imbalance--;
            }
        }
        else if (S[i] == ']')
        {
            countRight++;
            imbalance = (countRight - countLeft);
        }
    }
    return swap;
}
int main()
{
    string s;
    cin>>s;
    cout<<minimumNumberOfSwaps(s);
    return 0;
}