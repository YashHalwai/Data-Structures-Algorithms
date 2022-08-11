// Q. Factorials of large numbers

// https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> v;
        v.push_back(1);
        int i = 2;
        int carry = 0;
        while (i <= N)
        {
            for (int j = v.size() - 1; j >= 0; j--)
            {
                int temp = carry + (i * v[j]);
                if (temp > 9)
                {
                    carry = temp / 10;
                    temp = temp % 10;
                    v[j] = temp;
                }
                else
                {
                    carry = 0;
                    v[j] = temp;
                }
            }
            while(carry!=0)
            {
                int temp=carry%10;
                v.insert(v.begin(), temp);
                carry/=10;
            }
            i++;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends