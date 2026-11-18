class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded;
        char ch = char(257);
        
        for (auto str : strs) {
            for (auto st : str) {
                encoded.push_back(st);
            }
            encoded.push_back(ch);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
        char ch = char(257);
        string str = "";

        for (auto c : s) {
            if(c!=ch){
                str.push_back(c);
            }else{
                res.push_back(str);
                str="";
            }
        }
        return res;
    }
};
