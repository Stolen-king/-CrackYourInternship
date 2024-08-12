class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int hash[26]={0};

        priority_queue<int>pq;

        for(int i=0;i<tasks.size();i++){
            hash[tasks[i]-'A']++;
        }

        for(int i =0;i<26;i++){
            if(hash[i] >0){
                pq.push(hash[i]);
            }
        }
        int ans=0;
        int time =0;

        while(!pq.empty()){
            vector<int>temp;
            for(int i=0;i<=n;i++){
                if(!pq.empty()){
                    temp.push_back(pq.top()-1);
                    pq.pop();
                }
            }

            for(auto it : temp){
                if(it>0){
                    pq.push(it);
                }
            }

            if(pq.empty()){
                ans+=temp.size();
            }
            else{
                ans += (n+1);
            }
        }
        return ans;
    }
};112_flatten.cpp