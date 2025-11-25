class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        
        int start=0,end=0,ans,mid;

        for(int i=0;i<n;i++){
            start = max(start,weights[i]);
            end += weights[i];
        }

        while(start<=end){

            int mid = start+(end-start)/2;

            int place=0, count=1;
            for(int i=0;i<n;i++){
                place += weights[i];
                if(place>mid){
                    count++;
                    place = weights[i];
                }
            }

            if(count<=days){
                ans=mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;

    }
};