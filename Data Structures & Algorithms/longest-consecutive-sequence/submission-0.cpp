class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;
        unordered_map<int, int> numLengths;

        for (int num : nums) {
            int nextNum = num;
            while (numSet.count(nextNum)) {
                numSet.erase(nextNum);
                nextNum++;
            }

            int currentSequenceLength = (nextNum - num);
            if (numLengths.count(nextNum)) {
                currentSequenceLength += numLengths[nextNum];
            }

            numLengths[num] = currentSequenceLength;
            maxLength = max(maxLength, numLengths[num]);
        }

        return maxLength;
    }
};
