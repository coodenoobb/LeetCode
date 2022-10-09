class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int row = accounts.size();
        int col = accounts[0].size();
        int sum = 0;
        int maxi = INT_MIN;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                sum += accounts[i][j];
            }
            maxi = max(maxi,sum);
            sum = 0;
            
        }
        return maxi;
    }
};