// Q. Minimum swaps and K together

// https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
       int count = 0;//number of element less than or equal k (window size)
       for(int i=0; i<n; i++)
           if(arr[i] <= k)count++;
           
    //koi element chota hai hi ni tou kese
           if(count == 0) return 0;
        int i=0, j=0;
        int bad = 0;
        int ans = INT_MAX;
        
        while(j < n){
            if(arr[j] > k) bad++; //curr window me kitne greater k ele(jinko swap krna hoga)
            if(j-i+1 < count) j++;
            else if(j-i+1 == count){
                ans = min(ans, bad);
                //slide windlow
                if(arr[i] > k) bad--;
                i++,j++;
            }
        }
        return ans;

    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends