class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int ,int>nmap;
       for(int i =0; i< nums.size();i++){
        int remaining=target-nums[i];
        if(nmap.count(remaining)){
            return {nmap[remaining],i};
        }
        nmap[nums[i]]=i;
       } 
       return {};
    }
};
