class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int sum = 0;
        int bestmax = a[0], maxans = a[0];
        int bestmin = a[0], minans = a[0];

        for(int i=1; i<a.size(); i++){
            bestmax = max(a[i],bestmax+a[i]);
            maxans = max(maxans,bestmax);

            bestmin = min(a[i],bestmin+a[i]);
            minans = min(minans,bestmin);
        }
        for(int i=0; i<a.size(); i++){
            sum += a[i];
        }

        if(sum == minans){
            return maxans;
        }
        int cirans = sum - minans;
        return max(maxans,cirans);
    }
};