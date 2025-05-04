#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()

int findNumbers(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int digits = (int)log10(nums[i]) + 1;
        if (digits % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    vector<int> nums = {12,345,2,6,7896};
    cout<<findNumbers(nums)<<endl;
    return 0;
}