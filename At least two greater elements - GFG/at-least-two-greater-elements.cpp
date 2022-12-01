//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> findElements(int arr[], int n)
    {
        // Your code goes here   
        vector <int> ans;
        int index = 0;
        sort(arr,arr+n);
	    
	    int max1 = arr[n-1];
	    int max2 = INT_MIN;
	    
	    for(int i=0;i<n-1;i++){
	        if(arr[i]==arr[i+1]){
	            max2 = -1;
	        }
	    }
	    
	    for(int i=0 ;i<n;i++){
	        if(arr[i]<max1 and arr[i]!=max1){
	            max2 = arr[i];
	            index++;
	        }
	    }
	    
	    for(int i =0;i<index-1;i++ ){
	        ans.push_back(arr[i]);
	    }
	    return ans;
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
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution ob;
        vector <int> res = ob.findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}
// } Driver Code Ends