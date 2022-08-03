// Q. Intersection & Union of two Arrays

// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/0
/*
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        unordered_map<int, int> map;
        
        for(int i = 0; i < n; i++)
        {
            map[a[i]]++;
        }
        for(int i = 0; i < m; i++)
        {
            map[b[i]]++;
        }
        
        return map.size();
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
*/


// https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

/*
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
           int cnt=0;
       unordered_map<int, int> ans ;
       for(int i=0; i<n; i++){
           ans[a[i]]++ ;
       }
       for(int i=0; i<m; i++)
           if( ans[b[i]]>0 )
           {
               cnt++ ;
               ans[b[i]]=0 ;
           }
       return cnt ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends
*/

// https://www.codingninjas.com/codestudio/problems/find-similarities-between-two-arrays_1229070?topList=love-babbar-dsa-sheet-problems

/*

#include <unordered_map>
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	unordered_map <int,int> map;
    
    for(int i = 0; i < n; i++)
    {
        map[arr1[i]]++;
    }
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        if(map.count(arr2[i]) == 1)
        {
            ans++;
        }
    }
    int notCommon = n + m - ans;
    pair<int,int>p = make_pair(ans,notCommon);
    
    return p;
    
}

*/
