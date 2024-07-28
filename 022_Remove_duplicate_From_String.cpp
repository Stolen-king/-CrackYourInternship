class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    vector<char>v(26,0);
	    vector<char>v1(26,0);
	    string ans="";
	    for(int i=0;i<str.size();i++){
	        char ch = str[i];
	        if(ch>='A' && ch <='Z'){
	            if(v1[str[i] - 'A'] > 0){
	                continue;
	            }
	            else{
	                v1[str[i] - 'A']++;
	                ans+=str[i];
	            }
	        }
	        else{
	            if(v[str[i] - 'a'] > 0){
	                continue;
	            }
	            else{
	                v[str[i] - 'a']++;
	                ans+=str[i];
	            }
	        }
	    }
	    return ans;
	}
};