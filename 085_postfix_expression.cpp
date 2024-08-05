 int evaluatePostfix(string s)
    {
        // Your code here
        int ans=0;
        stack<int>st;
        for(auto c : s){
            if(isdigit(c)){
                st.push(c-'0');
            }
            else{
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                switch(c){
                    case '+':
                    st.push(x+y);
                    break;
                    case '-':
                    st.push(x-y);
                    break;
                    case '*':
                    st.push(x*y);
                    break;
                    case '/':
                    st.push(x/y);
                    break;
                }
            }
        }
        return st.top();