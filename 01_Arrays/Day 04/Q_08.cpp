// Q. Kadane's Algorithm

// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
// https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=love-babbar-dsa-sheet-problems

#include <iostream>
using namespace std;

int maxSubArray(int arr[], int n)
{
    int currSum = 0;
    int maxSum = 0;

    for(int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];

        if(currSum > maxSum)
        {
            maxSum = currSum;
        }
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << maxSubArray(arr,n);
    }

    return 0;
}