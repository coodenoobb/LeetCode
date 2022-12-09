//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void transpose(vector<vector<int>>& arr, int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	    transpose(arr,n);
	    
	    for(int i=0;i<n;i++){
	        int l=0;
	        int h=n-1;
	        
	        while(l<h){
	            swap(arr[l][i],arr[h][i]);
	            l++;
	            h--;
	        }
	    }
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends