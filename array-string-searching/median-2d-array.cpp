#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c)
{
    int size = r * c;
    vector<int> v;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            v.push_back(matrix[i][j]);
    }
    sort(v.begin(), v.end());
    if (size % 2 == 0)
        return (v[size / 2] + v[size / 2 - 1]) / 2;
    else
        return (v[size / 2]);
}
int median(vector<vector<int>> &matrix, int r, int c)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    //Since matrix is rowwise sorted all the minimum
    //will be in 1st column and max in last one.
    for (int i = 0; i < r; i++)
    {
        mn = min(mn, matrix[i][0]);
        mx = max(mx, matrix[i][c - 1]);
    }

    //Dezired var tells that we need a that much count
    //Basically if a number is median it has to be greated than half of the number in the array.
    int dezired = (r * c + 1) / 2;

    //We will apply binary search over a range from min to max
    while (mn < mx)
    {
        int mid = mn + (mx - mn) / 2;
        int count = 0;

        //Choosing a number between mn and mx and finding the count of numbers less than that
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                if (matrix[i][j] < mid)
                    count++;

        if (count < dezired)
            mn = mid + 1;
        else
            mx = mid;
    }
    return mn;
}
int main()
{

    return 0;
}