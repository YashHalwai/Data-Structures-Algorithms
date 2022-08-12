// Q. Maximum Product Subarray

// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	     long long int i,pro,ans1=INT_MIN,ans2=INT_MIN;
   pro=1;
   for(i=0;i<n;i++)
   {
       pro=pro*arr[i];
       ans1=max(ans1,pro);
       if(pro==0)
       pro=1;
   }
   pro=1;
   for(i=n-1;i>=0;i--)
   {
       pro=pro*arr[i];
       ans2=max(pro,ans2);
       if(pro==0)
       pro=1;
   }
     return max(ans1,ans2);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends