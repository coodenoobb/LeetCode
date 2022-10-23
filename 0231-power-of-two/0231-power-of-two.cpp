class Solution {
public:
    bool check(int n){
        
        if(n<=0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        
        else if(n%2==1){
            return 0;
        }
        return check(n/2);
        
    }
    
    bool isPowerOfTwo(int n) {
        return check(n);
    }
};