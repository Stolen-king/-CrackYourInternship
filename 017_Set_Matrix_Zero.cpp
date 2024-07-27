class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        vector<int>row(a.size(),0);
        vector<int>col(a[0].size(),0);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
         for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(row[i]||col[j]){
                    a[i][j]=0;
                }
            }
        }


    }
};