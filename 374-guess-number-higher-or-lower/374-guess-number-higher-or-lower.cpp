/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int l = 1;
        int h = n;
        
        int mid = l+(h-l)/2;
        int res = guess(mid); 
        
        while(l<=h){
            
            int res = guess(mid);   //Guess Function will check for mid 
            
            if(res==0){
                return mid;
            }
            
            else if(res<0){
                 h = mid - 1;
            }
            
            else{
               l = mid + 1;
            }
            mid = l+(h-l)/2;
        }
        return -1;
        
    }
};