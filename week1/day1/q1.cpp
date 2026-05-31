class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;int need;
        for(int i=0;i<nums.size();i++){
            need=target-nums[i];
            if(mp.find(need)!=mp.end()){
                return {mp[need]+1,i+1};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};
