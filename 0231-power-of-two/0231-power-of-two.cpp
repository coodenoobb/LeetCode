class Solution {
public:
    bool check(int n){
        
        if(n<=0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        
     
        
        return (n%2==0) && check(n/2);
        
    }
    
    bool isPowerOfTwo(int n) {
        return check(n);
    }
};