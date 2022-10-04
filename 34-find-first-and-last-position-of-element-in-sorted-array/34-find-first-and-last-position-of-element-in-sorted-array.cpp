class Solution {
public:
    int firstOcc(vector<int>& arr, int size,int t){
        
        int l = 0;
        int h = size-1;
        int mid = l+(h-l)/2;
        int ans = -1;
        
        while(l<=h){
            if(arr[mid]==t){
                ans = mid;
                h = mid-1;
            }
            else if (arr[mid]>t){
                h = mid - 1;
            }
            else{
                l =mid + 1;
            }
            mid = l+(h-l)/2;
        }
        
        return ans;
    }
    
        int lastOcc(vector<int>& arr, int size,int t){
        
        int l = 0;
        int h = size-1;
        int mid = l+(h-l)/2;
        int ans = -1;
        
        while(l<=h){
            if(arr[mid]==t){
                ans = mid;
                l = mid+1;
            }
            else if (arr[mid]>t){
                h = mid - 1;
            }
            else{
                l =mid + 1;
            }
            mid = l+(h-l)/2;
        }
        
        return ans;
    }
        
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>  vec;
        int size = nums.size();
        
        int first = firstOcc( nums, size, target);
        int last  = lastOcc( nums, size, target);
        
        vec.push_back(first);
        vec.push_back(last);
        
        return vec;
    }
};