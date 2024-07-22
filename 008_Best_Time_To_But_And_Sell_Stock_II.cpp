class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans=0;
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]){
                int pro=a[i]-a[i-1];
                ans+=pro;
            }
        }
        return ans;
    }
};