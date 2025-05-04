
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int minimum = INT_MAX;
        while (left<=right)
        {
            int mid = (left + right)/2;
            
            if(nums[left] <= nums[mid]){
                minimum = min(minimum, nums[left]);
                left = mid+1;
            }else{
                minimum = min(nums[mid], minimum);
                right = mid -1;
            }
        }
        return minimum;
        
    }
};


