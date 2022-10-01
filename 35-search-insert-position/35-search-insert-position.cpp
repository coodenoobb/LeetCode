class Solution {
public:
    int searchInsert(vector<int>& arr, int key) {
        
        int l = 0;
        int h = arr.size()-1;
        
        int mid = l+(h-l)/2;
        
        while(l<=h){
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
            mid = l+(h-l)/2;
        }
        return mid;
        
    }
};