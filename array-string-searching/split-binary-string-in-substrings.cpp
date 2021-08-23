#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    int count0 = 0, count1 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            count0++;
        }
        else {
            count1++;
        }
        if (count0 == count1) {
            cnt++;
        }
    }
    if (count0 != count1) {
        cout<<-1;
        exit(0);
    }
    cout<< cnt;
    return 0;
}
