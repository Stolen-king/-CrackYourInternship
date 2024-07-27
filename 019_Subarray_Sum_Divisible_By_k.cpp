class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int mod = sum % k;
            if (mod < 0) {
                mod += k;
            }
            if (mp.find(mod) != mp.end()) {
                ans+=mp[mod];
                mp[mod]+=1;
            }
            else{
                mp[mod]=1;
            }
        }
        return ans;
    }
};