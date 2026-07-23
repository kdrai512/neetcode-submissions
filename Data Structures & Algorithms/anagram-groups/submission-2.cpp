class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> containsAnagram;
        unordered_map<string, vector<string>> ms;
        for (string word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            ms[key].push_back(word);
        }

        for (auto& x : ms) {
            containsAnagram.push_back(move(x.second));
        }
        return containsAnagram;
    }
};
