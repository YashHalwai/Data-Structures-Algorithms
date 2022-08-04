// Q. Cyclically rotate an array by one

// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
// https://www.codingninjas.com/codestudio/problems/rotate-array_1230543?topList=love-babbar-dsa-sheet-problems

#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while(i != j)
    {
        swap(arr[i],arr[j]);
        i++;
    }
}

void rotateD(int arr[], int n)
{
    int start = 0;
    int end =  n - 1;

    while(start <= end)
    {
        swap(arr[start++],arr[end--]);
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

        rotate(arr,n);
        printArray(arr,n);

        int d;
        cin >> d;

        rotateD(arr,d);
        rotateD(arr,n);
        rotateD(arr,n-d);
        printArray(arr,n);
    }

    return 0;
}