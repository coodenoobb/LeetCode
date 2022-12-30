//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insert(stack<int> &st, int elem){
        // base case
        if(st.empty()){
            st.push(elem);
            return;
        }
        
        int top = st.top();
        st.pop();
        
        // recursive call
        insert(st,elem);
        st.push(top);
    }
    
    void Reverse(stack<int> &St){
        // base case
        if(St.empty())  return;
        
        int top = St.top();
        St.pop();
        
        // recursive calls
        Reverse(St);
        insert(St,top);
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends