class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a0=0;
        int a1=0;
        int a2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a0++;
            }
            else if(nums[i]==1){
                a1++;
            }
            else{
                a2++;
            }
        }
        int i=0;
        while(a0!=0){
            nums[i++]=0;
            a0--;
        }
        while(a1!=0){
            nums[i++]=1;
            a1--;
        }
        while(a2!=0){
            nums[i++]=2;
            a2--;
        }
    }
};