class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        
        int j=a.size()-1;
        int ans=0;
        for(int i=0;i<k;i++){
            ans+=a[i];
        }
        int maxans=ans;
        k=k-1;
        int rsum=0;
        while(k>=0){
            ans-=a[k--];
            rsum+=a[j--];
            maxans=max(maxans,ans+rsum);
            
        }
        return maxans;
    }
};