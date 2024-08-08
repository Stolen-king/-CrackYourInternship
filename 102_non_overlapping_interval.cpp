class Solution {
public:
    static bool cmp(const vector<int>&a1,const vector<int>&a2){
        return a1[1]<a2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),cmp);
        int pend=a[0][1];
        int cnt=0;
        for(int i=1;i<a.size();i++){
            int end = a[i][0];
            if(pend>end){
                cnt++;
            }
            else{
                pend=a[i][1];
            }
        }
        return cnt;
    }
};