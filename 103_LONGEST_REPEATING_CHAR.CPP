class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int hash[26]={0};
        int left=0;
        int right=0;
        int n=s.length();
        int maxfrq=0;

        for(int i=0;i<n;i++){
            hash[s[i]-'A']++;

            maxfrq=max(maxfrq,hash[s[i]-'A']);

            int cng = (i-left+1)-maxfrq;

            if(cng<=k){
                maxlen=max(maxlen,(i-left+1));
            }
            else{
                hash[s[left]-'A']--;
                left++;
            }
        }
        return maxlen;
    }
};