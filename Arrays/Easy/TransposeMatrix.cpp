class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        if(m==n){
        for(int i=0; i<m; i++){
            for(int j=i+1; j<n; j++){
                if(i==j) continue;
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        return matrix;
        }
        vector<vector<int>> result(n, vector<int> (m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                result[i][j] = matrix[j][i];
            }
        }
        return result;
    }
};