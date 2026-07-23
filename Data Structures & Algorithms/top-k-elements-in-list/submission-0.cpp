class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> nmap;
        priority_queue<pair<int, int>> pq;
        for (int& n : nums) {
            nmap[n]++;
        }
        vector<int> res;
        for (auto& m : nmap) {
            pq.push({m.second, m.first});
        }

        while (k > 0 && !pq.empty()) {
            pair<int, int> value = pq.top();
            res.push_back(value.second);
            pq.pop();
            k--;
        }

        return res;
    }
};
