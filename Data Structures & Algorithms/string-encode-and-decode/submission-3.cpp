class Solution {
   public:
   string encode(vector<string> &strs) {
    if (strs.empty())
      return "";
    string encoded_string = "";
    for (string& str : strs) {
      encoded_string += to_string(str.length()) + "#";
      encoded_string += str;
    }
    return encoded_string;
  }

  vector<string> decode(string str) {
     vector<string> decoded_string;
    string s = "";
    int i = 0;
    while (i < str.length()) {
      int j = i;
      // Finding the delimiter idx
      while (j < str.length() && str[j] != '#') {
        j++;
      }

      int s_length = stoi(str.substr(i, j - i));
      string word = str.substr(j + 1, s_length);
      decoded_string.push_back(word);
      i = (j + 1) + s_length;
    }
    return decoded_string;
  }
};
