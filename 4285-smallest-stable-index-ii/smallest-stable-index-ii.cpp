class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> mind(n);
        int minelem = INT_MAX;
        for(int i=n-1; i>=0; i--){
            minelem = min(minelem,nums[i]);
            mind[i] = minelem;
        }

        int maxelem = 0;
        for(int i=0; i<n; i++){
            maxelem = max(maxelem,nums[i]);

            if(maxelem - mind[i] <= k)
                return i;
        }
        return -1;
    }
};