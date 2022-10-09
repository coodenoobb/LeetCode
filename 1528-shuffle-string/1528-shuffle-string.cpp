class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string ans = s;
        
        for(int i=0; i<indices.size(); i++){
            int val = indices[i];
            ans[val] = s[i];
        }
        return ans;
    }
};