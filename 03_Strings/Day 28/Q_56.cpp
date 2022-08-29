// Q. Longest Palindrome in a String

// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
         int n = S.length();
        int start = 0;
        int len = 1;
        
        for(int i=0;i<n;i++)
        {
            // Even length substring by taking middle i
            int left = i-1; 
            int right = i+1;
                // check untill left and right are equal thrn proceed else break;
            while(left >=0 and right<= n-1)
            {
                if(S[left] == S[right])
                {
                    if(len < right-left+1)
                    {
                        len = right-left+1;
                        start = left;    
                    }
                    left--;
                    right++;
                }
                else
                {
                    break;
                }
            }
            
            // odd length substring by taking middle i
            left = i;
            right = i+1;
            while(left >=0 and right<= n-1)
            {
                if(S[left] == S[right])
                {
                    if(len < right-left+1)
                    {
                        len = right-left+1;
                        start = left;    
                    }
                    left--;
                    right++;
                }
                else
                {
                    break;
                }
            }
            
        }
        return S.substr(start,len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends