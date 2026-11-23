class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";

        for(auto &ch: s){
            if(res.empty() || ch != res.back())
                res.push_back(ch);
            else
                res.pop_back();
        }
        return res;
    }
};