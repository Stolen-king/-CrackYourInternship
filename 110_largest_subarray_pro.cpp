class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double maxi =INT_MIN;
        int n=nums.size();

        double pre=1;
        double suf=1;
        for(int i=0;i<n;i++){
            pre = pre * nums[i];
            suf = suf * nums[n-1-i];
            maxi = max(maxi,max(pre,suf));
            if(pre==0){
                pre=1;
            }
            if(suf==0){
                suf = 1;
            }
        }
        return maxi;
    }
};