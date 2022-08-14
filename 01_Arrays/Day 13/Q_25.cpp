// Q. Majority Element II

// https://leetcode.com/problems/majority-element-ii/

/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        int c=n/3;
        for(auto i:mp){
            if(i.second>c)
                v.push_back(i.first);
        }
        return v;
    }
};
*/