class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double max_avg=0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg = sum/k;
        max_avg = avg;
        for(int i=k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[i-k];
            avg=sum/k;
            max_avg=max(avg,max_avg);
        }
        return max_avg;
    }
};