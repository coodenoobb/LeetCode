class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i = 0;          // Lets assume here's a zero
        
        for(int j=0;j<nums.size();j++){
            
            if(nums[j]!=0){
                swap(nums[j],nums[i]);              // Here we are Arranging Non Zeros to the left 
                i++;                                
            }
            
            
        }
        
        
    }
};