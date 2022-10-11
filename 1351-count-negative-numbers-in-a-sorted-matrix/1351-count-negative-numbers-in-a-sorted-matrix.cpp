class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int ans = 0;
        
        
        int col = grid[0].size();
        
        
        for(int i=0; i<row; i++){
            int l = 0;
            int h = col-1;
            int mid = l+(h-l)/2;
            int sum = 0;
            
            
            while(l<=h){
                
                int val = grid[i][mid];
                
                if(val>=0){
                    l = mid+1;
                    
                }
                else{
                    
                    h = mid-1;
                }
                mid = l+(h-l)/2;
                sum = col-mid;
            }
           
            ans = ans+sum;
        }
        return ans;
    }
};