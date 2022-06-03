class Solution {
public:
    
    void revString(vector<char>& s,int i, int j){
        
        //base
        if(i>j){
            return ;
        }
        swap(s[i],s[j]);
        i++;
        j--;
        
        //recurseive call
        
        return revString(s,i,j);
    }
    
    void reverseString(vector<char>& s) {
        
        int n =s.size()-1;
        revString(s,0,n);
    }
};