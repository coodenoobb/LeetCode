class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int size = row*col;        
        
        
        int l = 0;
        int h = size-1;
       
        int mid = l+(h-l)/2;
        while(l<=h){
            
            
            int value = matrix[mid/col][mid%col];
            
            if(value==target){
                return true;
            }
            else if(value<target){
                l = mid+1;
            }
            else if(value>target){
                h = mid-1;
            }     
            mid = l+(h-l)/2;
            
        }
        return false;
               
        
    }
};