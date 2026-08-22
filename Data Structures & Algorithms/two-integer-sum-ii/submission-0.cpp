class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int left = 0;
        int right = nums.size() - 1;
        int current_sum;

        while (left < right) {
            current_sum = nums[left] + nums[right];
            if (current_sum == target) {
                res = {left + 1, right + 1};
                break;
            } else if (current_sum > target)
                right--;
            else
                left++;
        }

        return res;
    }
};
