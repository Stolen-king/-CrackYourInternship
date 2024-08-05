class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>a;
        for(char it : s){
            if(it == '#'){
                if(!a.empty()){
                    a.pop();
                }
            }
            else{
                a.push(it);
            }
        }
        stack<char>b;
        for(char it : t){
            if(it == '#'){
                if(!b.empty()){
                    b.pop();
                }
            }
            else{
                b.push(it);
            }
        }
        while(!a.empty() && !b.empty()){
            if(a.top()!=b.top()){
                return false;
            }
            a.pop();
            b.pop();
        }
        return a.empty()&&b.empty();
    }
};