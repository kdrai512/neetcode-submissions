class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 0);

        long long totalProduct = 1;
        int zeroCount = 0;

        // Count zeros and get the total product of all NON-zero elements
        for (int num : nums) {
            if (num == 0) {
                zeroCount++;
            } else {
                totalProduct *= num;
            }
        }

        for (int i = 0; i < n; i++) {
            if (zeroCount > 1) {
                output[i] = 0;
            } else if (zeroCount == 1) {
                if (nums[i] == 0) {
                    output[i] = totalProduct;
                } else {
                    output[i] = 0;
                }
            } else {
                output[i] = totalProduct / nums[i];
            }
        }

        return output;
    }
};
