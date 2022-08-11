// Q. Subarray with 0 sum

// https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1


//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        map<int,int> mp;
       mp[0]=0;
       int csum=0;
       for(int i =0;i<n;i++)
       {
           csum+=arr[i];
           if(mp.find(csum)!=mp.end())
           return 1;
           else
           mp[csum] = i+1;
       }
       return 0;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends