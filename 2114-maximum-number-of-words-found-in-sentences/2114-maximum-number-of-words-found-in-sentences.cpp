class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        
        int n = s.size();
        int maxi = INT_MIN;
        int word = 0;
        
        for(int i=0;i<n;i++){
            
            string st = s[i];
            int len = st.length();
            
            for(int j=0; j<len; j++){
                
                if(st[j]==' '){
                    word++;
                }
                
            }
            maxi = max(maxi,word);
            word = 0;
            
        }
        
        return maxi+1;
    }
};