class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        int res = 0;
        int presum = 0;
        unordered_map<int,int> mp;
        mp.insert({0,1});

        for(int i=0; i<n ; i++){
            presum += nums[i];

            if(mp.find(presum - k) != mp.end()){
                res += mp[(presum - k)];
            }
            mp[presum]++;
        }
        return res;
    }
};