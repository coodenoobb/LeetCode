class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<int> ans(n);                     // Created a new Vector beacuse values will be over-written
        
        for(int i= 0;i<n;i++){
                                                    
            ans[(i+k)%n] = nums[i];             //  "(i+k)%n" to get the index of the new Array
            
        }
        nums = ans;                             // Copying values of ans in Array nums
    }
};