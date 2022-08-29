// Q. Check if strings are rotations of each other or not

// https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
              int n1 = s1.size();
       int n2 = s2.size();
       
       if(n1 != n2) return 0;
       string s3 = s1+s1;
       for(int i = 0; i < s3.size(); i++){
           if(s3.substr(i, n1) == s2) return 1;
       }
       return 0;

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends