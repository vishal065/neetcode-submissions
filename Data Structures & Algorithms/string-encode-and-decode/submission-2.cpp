#define STRLEN 3
class Solution {
   public:
    string padlen(string s) {
        string out = "";
        int zero = STRLEN - s.size();
        while (zero-- >0) {
            out.push_back('0');
        }
        for (auto c : s) {
            out.push_back(c);
        }
        return out;
    }

    string encode(vector<string>& strs) {
        string out = "";
        for (auto str : strs) {
            string lenStr = padlen(to_string(str.length()));
            for (auto& ch : lenStr) {
                out.push_back(ch);
            }
            for (auto& ch : str) {
                out.push_back(ch);
            }
        }
        return out;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.length()) {
            int len = stoi(s.substr(i, STRLEN));
            i += STRLEN;
            string out = "";
            while (len--) {
                out.push_back(s[i]);
                i++;
            }
            res.push_back(out);
        }
        return res;
    }
};
