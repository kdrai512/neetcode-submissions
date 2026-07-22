class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> containsAnagram;
        unordered_map<string, vector<string>> ms;
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            string key = word;
            sort(key.begin(), key.end());
            ms[key].push_back(word);
        }

        for (auto x : ms) {
            containsAnagram.push_back(x.second);
        }
        return containsAnagram;
    }
};
