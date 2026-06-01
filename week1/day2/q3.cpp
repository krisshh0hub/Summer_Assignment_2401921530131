class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double prefix=0;double max_avg=INT_MIN;int count=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            count++;
            if(count==k){
                double avg=prefix/k;
                max_avg=max(avg,max_avg);
                prefix=prefix-nums[i-k+1];
                count--;
            }

        }
        return max_avg;
    }
};
