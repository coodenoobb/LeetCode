class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0, n =row*col;
        vector<int> ans;
        
        //index
        int startRow = 0, lastRow = row-1;
        int startCol = 0, lastCol = col-1;
        
        while(count<n){
            
        //startRow
        
        for(int i = startCol; count<n && i<=lastCol;i++){
            ans.push_back(matrix[startRow][i]);
            count++;
        }   startRow++;
        
        //lastCol
        
        for(int i= startRow; count<n && i<=lastRow;i++){
            ans.push_back(matrix[i][lastCol]);
            count++;
        }lastCol--;
        
        //lastRow
        
        for(int i= lastCol; count<n && i>=startCol;i--){
            ans.push_back(matrix[lastRow][i]);
            count++;
        }lastRow--;
        
        //startCol
        
        for(int i=lastRow; count<n && i>=startRow; i--){
            ans.push_back(matrix[i][startCol]);
            count++;
        }startCol++;
            
        }
        return ans;
    }
};