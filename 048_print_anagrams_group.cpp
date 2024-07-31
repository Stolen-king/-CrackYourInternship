class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>s;
        for(auto it : string_list){
            string ss =it;
            sort(ss.begin(),ss.end());
            mp[ss].push_back(it);
        }
        for(auto it : mp){
            s.push_back(it.second);
        }
        return s;
    }
};