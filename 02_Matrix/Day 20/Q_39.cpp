// Q. Median in a row-wise sorted Matrix

// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        vector<int> ans;
         for(int i=0;i<r;i++){
           for(int j=0;j<c;j++)
           ans.push_back(matrix[i][j]);
       }
       
       sort(ans.begin(),ans.end());
       
       int mid = (0+ans.size())/2;
       
       return ans[mid];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends