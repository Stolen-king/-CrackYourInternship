class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size() /2 ;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans;

        for(auto it : mp){
            if(it.second>n){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};