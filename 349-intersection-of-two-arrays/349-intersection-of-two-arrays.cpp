class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector <int> vec;
        int i=0,j = 0;
        
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                vec.push_back(nums1[i]);
                i++;
                j++;
                
            }
            else if( nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
            
        }
        
        // Erase duplicates form the array 
        
        vec.erase(unique(vec.begin(), vec.end()),vec.end());
        return vec;
        
    }
};