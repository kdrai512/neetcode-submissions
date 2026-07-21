class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       map<int , int> nmap;
       for(int i =0; i< nums.size(); i++){
        nmap[nums[i]]++;
       } 

       for(auto n:nmap){
        if(n.second > 1) return true;
       }

       return false;
    }
};