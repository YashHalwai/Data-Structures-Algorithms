// Q. Max rectangle

// https://practice.geeksforgeeks.org/problems/max-rectangle/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    vector<int> prevSmallest(int *arr,int n)
    {
        vector<int>ans(n);
        stack<int>s;
        
        for(int i = 0;i<n;i++)
        {
            while(!s.empty() && (arr[s.top()] >= arr[i]))
            {
                s.pop();
            }
            if(s.empty())
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }
    
    vector<int> nextSmallest(int *arr,int n)
    {
        vector<int>ans(n);
        stack<int>s;
        
        for(int i = n-1;i>=0;i--)
        {
            while(!s.empty() && (arr[s.top()] >= arr[i]))
            {
                s.pop();
            }
            if(s.empty())
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }
    
    int largestHistogram(int *arr, int n)
    {
        vector<int> next = nextSmallest(arr,n);
        vector<int> prev = prevSmallest(arr,n);
        
        int area = INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(next[i] == -1)next[i] = n;
            int height = arr[i];
            int width = next[i] - prev[i] - 1;
            
            area = max(area,(height*width));
        }
        return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
         int area = largestHistogram(M[0],m);
        
        for(int i = 1;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(M[i][j] != 0)M[i][j] = M[i][j] + M[i-1][j];
            }
            
            area = max(area,largestHistogram(M[i],m));
        }
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends