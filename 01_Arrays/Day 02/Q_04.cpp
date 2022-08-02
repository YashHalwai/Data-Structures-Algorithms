// Q. Sort 0 1 2 

// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=love-babbar-dsa-sheet-problems

#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high--]);
        }
    }
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

        sort012(arr,n);
        printArray(arr,n);
    }

    return 0;
}