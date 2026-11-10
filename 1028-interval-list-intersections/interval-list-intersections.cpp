class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> res;

        int i=0, j=0;
        while(i<a.size() && j<b.size()){
            int s1 = a[i][0], e1 = a[i][1];
            int s2 = b[j][0], e2 = b[j][1]; 

            if(s1 <= s2){
                if(e1 >= s2){
                    int s = max(s1,s2);
                    int e = min(e1,e2);
                    res.push_back({s,e});
                }
            }
            else{
                if(e2 >= s1){
                    int s = max(s1,s2);
                    int e = min(e1,e2);
                    res.push_back({s,e});
                }
            }
            if(e1<e2) i++;
            else j++;
        }
        return res;
    }
};