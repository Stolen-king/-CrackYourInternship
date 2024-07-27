// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int ans=1;
//         sort(nums.begin(),nums.end());
//         int a1 = nums[0]*nums[1]*nums[nums.size()-1];
//         int a2 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
//         return max(a1,a2);
//     }
// };


class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int first_max = INT_MIN ;
        int second_max = INT_MIN ;
        int third_max = INT_MIN ;

        int first_min = INT_MAX ;
        int second_min = INT_MAX ;

        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<first_min){
                second_min=first_min;
                first_min=nums[i];
            }
            else if(nums[i]<second_min){
                second_min=nums[i];
            }
            if(nums[i]>first_max){
                third_max=second_max;
                second_max=first_max;
                first_max=nums[i];
            }
            else if(nums[i]>second_max){
                third_max=second_max;
                second_max=nums[i];
            }
            else if(nums[i]>third_max){
                third_max=nums[i];
            }
        }

        int a1 = first_max * second_max * third_max;
        int a2 = first_min * second_min * first_max ;
        return max(a1,a2);
    }
};