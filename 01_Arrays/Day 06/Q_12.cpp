// Q. Merge Without Extra Space

// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m)
	{
		vector<int>v;
		for (int i = 0; i < n; i++)
		{
			v.push_back(arr1[i]);
		}
		for (int i = 0; i < m; i++)
		{
			v.push_back(arr2[i]);
		}
		//after push to merge array
		//sort the merge array
		sort(v.begin(), v.end());
		for (int i = 0; i < n; i++)
		{
			//after arr1 vlaue equal to merge array index
			arr1[i] = v[i];
		}
		for (int i = 0; i < m; i++)
		{
			//merge them after loop n stops
			arr2[i] = v[n + i];
		}
	}
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends