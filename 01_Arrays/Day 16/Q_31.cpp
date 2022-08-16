// Q.Minimum Size Subarray Sum

// https://leetcode.com/problems/minimum-size-subarray-sum/

/*
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int head = -1;
        int tail = 0;
        int ans = 1e9;
        int sum = 0; // maintain the running sum
        while(tail<n){
            while(head+1<n && sum+nums[head+1]<target){
                head++;
                sum+=nums[head];
            }
            // now tail to head+1 is a valid range
            
            if(head!=n-1 && sum+nums[head+1]>=target)ans = min(ans,head-tail+2);
            if(tail<=head){
                sum-=nums[tail];
                tail++;
            }
            else{
                tail++;
                head = tail-1;
            }
        }
        if(ans == 1e9) ans = 0;
        return ans;
    }
};
*/