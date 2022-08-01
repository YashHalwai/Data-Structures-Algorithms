// Q. Reverse the Array -->

// https://practice.geeksforgeeks.org/problems/reverse-an-array/0
// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?topList=love-babbar-dsa-sheet-problems


#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end  = n - 1;

    while(start <= end)
    {
        swap(arr[start++], arr[end--]);
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

        reverseArray(arr,n);
        printArray(arr,n);
    }

    return 0;
}