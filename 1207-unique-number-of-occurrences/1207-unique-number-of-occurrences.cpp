class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector <int> res;
        int size = arr.size();
        
        int i=0;
        
        sort(arr.begin(),arr.end());
        
        while(i<size){
            int count = 1;
            
            for(int j = i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            res.push_back(count);
            i=i+count;
        }
        
        sort(res.begin(),res.end());
        
        for(int i=0;i<res.size()-1;i++){
            if(res[i]==res[i+1]){
                return false;
            }
        }
        return true;
        
    }
};