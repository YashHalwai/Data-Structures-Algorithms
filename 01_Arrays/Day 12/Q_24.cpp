// Q. Longest consecutive subsequence

// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
       unordered_set<int> s(arr,arr+N);
    int res=0;
    for(int i=0;i<N;i++){
        int count=0;
        if(s.find(arr[i]-1)==s.end()){
            count=1;
            while(s.find(arr[i]+count)!=s.end())
                count++;
            res=max(count,res);
        }
    }
    return res;

    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends