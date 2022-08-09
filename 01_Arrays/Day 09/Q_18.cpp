// Q. Count pairs with given sum

// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
// https://practice.geeksforgeeks.org/problems/count-pair-sum5956/1


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
  vector<int> freq(k+1,0);
       int count = 0;
       for(int i=0; i<n; i++){
           if(arr[i] > k)continue;
           
           count += freq[k-arr[i]];
           freq[arr[i]]++;
       }
       return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends