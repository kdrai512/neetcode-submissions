class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        char sfreq[26] = {0}, tfreq[26] = {0};

        for (char ch : s) {
            sfreq[ch - 'a']++;
        }
        for (char ch : t) {
            tfreq[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (sfreq[i] != tfreq[i]) {
                return false;
            }
        }

        return true;
    }
};
