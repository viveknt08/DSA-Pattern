class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            int minelem = INT_MAX;
            int maxelem = INT_MIN;
            
            for(int j =0; j<=i; j++){
                maxelem = max(maxelem,nums[j]);
            }

            for(int j = i; j<= n-1; j++){
                minelem = min(minelem,nums[j]);
            }

            if(maxelem - minelem <= k)
                return i;
        }
        return -1;
    }
};