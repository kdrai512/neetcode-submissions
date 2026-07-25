class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (int i = 0; i < strs.size(); i++) {
            encoded_string += strs[i];
            if (i != strs.size()) encoded_string += "-";
        }
        return encoded_string;
    }

    vector<string> decode(string str) {
        vector<string> decoded_string;
        string s = "";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '-') {
                decoded_string.push_back(s);
                s="";
                continue;
            }
            s += str[i];
        }
        return decoded_string;
    }
};
