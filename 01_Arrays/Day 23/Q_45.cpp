// Q. Pairs with specific difference

// https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here   
        sort(arr, arr+N);
        int sum = 0;
        
        for(int i=N-1; i>0; i--)
        {
            if(abs(arr[i] - arr[i-1]) < K)
            {
                sum += arr[i] + arr[i-1];
                i--;
            }
        }
        
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}

// } Driver Code Ends