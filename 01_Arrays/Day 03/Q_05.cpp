// Q. Move all negative elements to end

// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

#include <iostream>
using namespace std;

void negEnd(int arr[], int n)
{
    int j = 0;
    int arr1[n];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            arr1[j++] = arr[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr1[j++] = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
}

// https://www.codingninjas.com/codestudio/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?topList=love-babbar-dsa-sheet-problems

void negBeg(int arr[], int n)
{
    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                swap(arr[i],arr[j]);
            }

            j++;
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

        // printArray(arr,n);
        negEnd(arr,n);
        printArray(arr,n);
        negBeg(arr,n);
        printArray(arr,n);
    }

    return 0;
}