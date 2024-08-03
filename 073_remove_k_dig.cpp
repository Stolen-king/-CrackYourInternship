class Solution {
public:
    string removeKdigits(string s, int k) {
        if(s.length()==k){
            return "0";
        }
        stack<int>st;
        string ans="";
        for(int i=0;i<s.length();i++){
            while( ans.size()>0 && k>0 && ans.back()>s[i]){
                ans.pop_back();

                k--;
            }
            if(s[i]!='0'||ans.length()>0){
                ans.push_back(s[i]);
            }
        }
        while(k>0 && ans.length()>0){
            ans.pop_back();
            k--;
        }
        if(ans==""){
            return "0";
        }
        return ans;
    }
};