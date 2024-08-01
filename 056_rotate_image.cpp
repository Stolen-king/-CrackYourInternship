class Solution {
public:
    void transposematr(vector<vector<int>>& matrix){
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
    }
    void reversematr(vector<vector<int>>& matrix){
        int row=matrix.size();
        int col=matrix[0].size()-1;
        int st=0;


        while(st<col){
            for(int i=0;i<row;i++){
                swap(matrix[i][st],matrix[i][col]);
            }
            col--;
            st++;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transposematr(matrix);
        reversematr(matrix);
    }
};