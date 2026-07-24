class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> nmap;
        vector<vector<int>> buckets(nums.size() + 1);

        // Let's store the nums & their frequencies to map.
        for (int num : nums) {
            nmap[num]++;
        }

        for (auto& [num, freq] : nmap) {
            buckets[freq].push_back(num);
        }

        // create an array for storing  k frequent arrays.
        vector<int> res;
        for (int i = buckets.size() - 1; i >= 0 && res.size() != k; i--) {
            for (int n : buckets[i]) {
                res.push_back(n);
            }
        }
        return res;
    }
};
