class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int ans = 0;
        int sum = 0;
        
        mp[0] = 1; // To handle the case when a subarray sum starts from the beginning
        
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            if (mp.find(sum - k) != mp.end()) {
                ans += mp[sum - k];
            }
            mp[sum]++;
        }
        
        return ans;
        // return ans;
    }
};