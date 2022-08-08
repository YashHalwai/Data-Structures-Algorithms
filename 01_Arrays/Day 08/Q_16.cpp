// Q. Count Inversions

// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long int arr[], long long int l, long long int mid, long long int r, long long int &count)
    {
       long long int *newArr = new long long int[r-l+1];
       long long int i = l, j= mid+1, mainIndex = 0;
       while(i<=mid && j <= r){
           if(arr[i] > arr[j]){
               newArr[mainIndex++] = arr[j++];
               count += mid - i +1;
           }else{
               newArr[mainIndex++] = arr[i++];
           }
       }
       
       while(i<= mid) newArr[mainIndex++] = arr[i++];
       while(j<=r) newArr[mainIndex++] = arr[j++];
       long long int k = 0;
       for(long long int i =l;i<=r;i++){
           arr[i] = newArr[k++];
       }
       delete []newArr;
    }
    void mergeSort(long long int arr[], long long int l, long long int r, long long int &count)
    {
        //base case
        if( l >= r){
            return;
        }
        
       long long int mid = (l+r)/2;
        mergeSort(arr, l,mid, count);
        mergeSort(arr, mid +1, r, count);
        merge(arr,l,mid, r,count);
        
    }
    long long int inversionCount(long long arr[], long long N)
    {

       long long int invCount = 0;
       mergeSort(arr, 0, N-1, invCount);
       return invCount;
    }
    

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends

// DONE