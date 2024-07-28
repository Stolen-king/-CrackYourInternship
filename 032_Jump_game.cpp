class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n =nums.size();
        int sum=nums[0];
        if(sum==0 && nums.size()>1){
            return false;
        }
        if(sum==0 && nums.size()==1){
            return true;
        }
        for(int i=1;i<n-1;i++){
            sum--;
            
            sum=max(sum,nums[i]);
            if(sum<=0){
                return false;
            }

        }
        return true;
    }
};