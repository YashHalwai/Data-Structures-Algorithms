// Q. Find Minimum & Maximum element in an array

// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
// https://www.codingninjas.com/codestudio/problems/sum-of-max-and-min_1081476?topList=love-babbar-dsa-sheet-problems

#include <iostream>
using namespace std;

void findMinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << min << " " << max << endl;
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

        printArray(arr,n);
        findMinMax(arr,n);

    }

    return 0;
}