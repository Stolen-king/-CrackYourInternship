class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<int>v;
        for(auto it : mp){
            v.push_back(it.second);
        }
        sort(v.rbegin(),v.rend());
        int cnt =0;
        for (int i = 1; i < v.size(); ++i) {
            if (v[i] >= v[i - 1]) {
                int desiredFreq = max(0, v[i - 1] - 1);
                cnt += v[i] - desiredFreq;
                v[i] = desiredFreq;
            }
        }
        return cnt;
        
    }
};