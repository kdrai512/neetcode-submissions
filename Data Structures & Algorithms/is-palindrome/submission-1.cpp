class Solution {
   public:
    bool isPalindrome(string str) {
        int left = 0;
        int right = str.size() - 1;
        while (left < right) {
            if (!isalnum(str[left])) {left++; continue;}
            if (!isalnum(str[right])) {right--;continue;}

            if (tolower(str[left]) != tolower(str[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};
