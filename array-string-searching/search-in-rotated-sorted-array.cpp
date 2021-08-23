#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    if (n == 1)
    {
        if (nums[0] == target)
            return 0;
        else
            return -1;
    }

    int l = 0, h = n - 1, first = nums[0];

    while (l <= h)
    {
        int m = l + (h - l) / 2;

        if (nums[m] == target)
            return m;

        bool check1 = nums[m] >= first;
        bool check2 = target >= first;

        if (check1 == check2)
        {

            if (target <= nums[m])
                h = m - 1;
            else
                l = m + 1;
        }
        else
        {

            if (check1)
                l = m + 1;
            else
                h = m - 1;
        }
    }

    return -1;
}
int main()
{

    return 0;
}