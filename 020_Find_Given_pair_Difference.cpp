class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i]-x)!=mp.end() || mp.find(x+arr[i])!=mp.end()){
                return 1;
            }
            else{
                mp[arr[i]]++;
            }
        }
        return -1;
    }
};