#include <bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
vector<int> nextGreaterElements(vector<int> &nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> res;

    for (int i = n - 1; i >= 0; i--)
        st.push(nums[i]);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && nums[i] >= st.top())
            st.pop();

        if (st.empty())
            res.push_back(-1);
        else
            res.push_back(st.top());

        st.push(nums[i]);
    }

    reverse(res.begin(), res.end());
    return res;
}