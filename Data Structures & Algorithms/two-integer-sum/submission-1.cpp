class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nmap;
        vector<int> sumIdx;
        int n = nums.size();

        for (int i = 0; i < n; i++) nmap[nums[i]] = i;

        for (int i = 0; i < n; i++) {
            int remaining = target - nums[i];
            int checkIdx= nmap[remaining];
            if (checkIdx && checkIdx != i) {
                sumIdx = {i, checkIdx};
                return sumIdx;
            }
        }
        return sumIdx;
    }
};
