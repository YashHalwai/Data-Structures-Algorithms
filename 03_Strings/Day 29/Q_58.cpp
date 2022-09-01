// Q. String Subsequence Game

// https://practice.geeksforgeeks.org/problems/string-subsequence-game5515/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
       bool isVowel(char ch){
       return ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u';
   }
   void vkd_rec(int ind, string s,set<string>&ans,string &ds){
       if(ind>=s.size()){                      // base constion
           if(ds.size()>=2){
               if(isVowel(ds[0]) && !isVowel(ds[ds.size()-1]))
                 ans.insert(ds);
           }
           return;
       }
       
       vkd_rec(ind+1,s,ans,ds);                   // pick !!
       
       ds.push_back(s[ind]);
       vkd_rec(ind+1,s,ans,ds);                   // Not Pick !!
       ds.pop_back();                         // Backtracking !!
   } 
 public:
   set<string> allPossibleSubsequences(string S) {
       // code her
       string ds = "";
       set<string>ans;
       string str="";
       vkd_rec(0,S,ans,ds);
    
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends