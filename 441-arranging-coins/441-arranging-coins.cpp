class Solution {
public:
    int arrangeCoins(int n) {
        
        int row = 1;
        int ans = 0;
        
        while(n>0){
            n = n-row;
            row++;
            if(n>=0){
                ans++;
            }
        }
        return ans;
    }
};