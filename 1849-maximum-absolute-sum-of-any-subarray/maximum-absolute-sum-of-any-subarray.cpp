class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int bestmax = a[0], max_ans = a[0];
        int bestmin = a[0], min_ans = a[0];

        for(int i=1; i<a.size(); i++){
            bestmax = max(a[i],bestmax+a[i]);
            max_ans = max(bestmax,max_ans);

            bestmin = min(a[i],bestmin+a[i]);
            min_ans = min(bestmin,min_ans);
        }
        return max(abs(max_ans),abs(min_ans));
    }
};