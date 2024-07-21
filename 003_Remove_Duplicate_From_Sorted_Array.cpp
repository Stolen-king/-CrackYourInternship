class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // vector<int>ans;
        // int n=nums.size();
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // return ans.size();

        int i=0;
        int j=i+1;

        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
                j++;
            }
            else{
                j++;
            }
        }
        return i+1;


    }
};