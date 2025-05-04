#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    
    int cnt = 1; 
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[cnt] = nums[i];
            cnt++;
        }
    }
    for(int j=0; j<cnt;j++){
        cout<<nums[j]<<" ";
    }
    return cnt;
}


int main()
{
  vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
  //cout<<removeDuplicates(nums)<<endl;
  removeDuplicates(nums);
    return 0;
}