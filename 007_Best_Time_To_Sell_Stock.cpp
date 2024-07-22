class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=0;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[low]){
                prices[low]=prices[i];
            }
            ans=max(ans,prices[i]-prices[low]);
        }
        return ans;
    }
};