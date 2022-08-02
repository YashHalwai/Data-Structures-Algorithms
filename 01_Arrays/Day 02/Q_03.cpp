// Q. Kth smallest element & largest element

// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
// https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_1115488?topList=love-babbar-dsa-sheet-problems

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void kthSmallLarge(int arr[], int n, int k)
{
    sort(arr,arr+n);
    cout << "Smallest = " << arr[k - 1] << " " << "Largest = " << arr[n - k] << endl;
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

        int k;
        cin >> k;

        kthSmallLarge(arr,n,k);
    } 

    return 0;
}