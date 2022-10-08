class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        
        int count = 0;                              // Store a count with zero
        
        for(int i = 1;i<nums.size(); i++){          // Starting the index from 1 because we have to comapre Index 0
            
            if(nums[i]!=nums[count]){
                count++;    
                nums[count] = nums[i];              // Inserting the values in modified array
            }
            
        }
        return count+1;                             // Size of array will be (index+1)
    }
};