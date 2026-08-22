class Solution {
public:
    int maximumSum(vector<int>& a) {
        int nodel = a[0];
        int onedel = a[0];
        int res = a[0];

        for(int i=1; i<a.size(); i++){
            onedel = max(nodel,onedel+a[i]);
            nodel = max(a[i],nodel+a[i]);
            res = max(res,max(nodel,onedel));
        }
        return res;
    }
};