//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int getReverse(int n){
        int ans = 0;
        while(n!=0){
            int rem = n%10;
            ans = ans*10+ rem;
            n/=10;
        }    
        return ans;
    }
    
    bool isPalindrome(int n){
        
        if(n==getReverse(n))    return true;
        else    return false;
        
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	
    	for(int i=0;i<n;i++){
    	    if(!isPalindrome(a[i]))   return false;
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends