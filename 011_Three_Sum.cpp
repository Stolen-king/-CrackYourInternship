class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                long long sum = nums[i]+nums[j]+nums[k];
                if(sum==0 && (i!=k && i!=j && j!=k)){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>0){
                    k--;
                }
                else{
                   j++;
                }
            }
            
        }
        for(auto it : st){
            ans.push_back(it);
        }
        
        return ans;
    }
};