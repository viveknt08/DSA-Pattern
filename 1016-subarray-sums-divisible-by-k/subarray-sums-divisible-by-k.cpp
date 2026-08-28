class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res = 0, presum = 0;
        unordered_map<int,int> mp;
        mp.insert({0,1});

        for(int i=0; i<nums.size(); i++){
            presum += nums[i];
            int rem = presum % k;

            if(rem < 0){
                rem += k;
            }
                res += mp[rem];
            
            mp[rem]++;
        }
        return res;
    }
};