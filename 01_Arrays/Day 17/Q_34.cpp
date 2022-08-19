// Q. Palindromic Array

// https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1

//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int ans=0;
   int remainder=0;
   for(int i=0;i<n;i++){
   ans=0;
   int pal=a[i];
   int temp=a[i];
   while(temp>0){
       remainder=temp%10;
       ans=ans*10+remainder;
       temp=temp/10;
   }
    if(pal!=ans){
        return 0;
    }
   }
   return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends