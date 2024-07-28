class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(word!=""){
                    reverse(word.begin(),word.end());
                    ans+=word+' ';
                    word="";
                }
            }
            else{
                word+=s[i];
            }
        }
        if(word!=""){
            reverse(word.begin(),word.end());
            ans+=word;
        }
        if(ans[ans.size()-1]==' '){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};