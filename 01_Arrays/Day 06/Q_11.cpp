// Q. Find the Duplicate Number

// https://leetcode.com/problems/find-the-duplicate-number/
// https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602

/*
#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
     int slow = arr[0];

   int fast = arr[0];

   do{

       slow=arr[slow];

       fast = arr[arr[fast]];

   }while(slow!=fast);

   

   fast=arr[0];

   while(slow!=fast){

       slow=arr[slow];

       fast= arr[fast];

   }

   return slow;
}
*/