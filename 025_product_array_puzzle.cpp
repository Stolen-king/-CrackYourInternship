class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        vector<long long int>ans(n);
        long long p=1;
        int cnt0=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt0++;
                continue;
            }
            else{
                p=p*nums[i];
            }
        }
        if(cnt0==0){
            for(int i=0;i<n;i++){
                long long val = p/nums[i];
                ans[i]=val;
            }
        }
        else if(cnt0==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    ans[i]=p;
                }
                else{
                    ans[i]=0;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans[i]=0;
            }
        }
        return ans;
        
    }
};