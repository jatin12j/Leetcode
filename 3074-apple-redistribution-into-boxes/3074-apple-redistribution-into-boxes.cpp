class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int ans =0;
        int sum=0;
        int tot =0;

        for(int i=0;i<apple.size();i++){
            sum += apple[i];
        }

        sort(capacity.begin(),capacity.end(),greater<int>());

        for(int j=0;j<capacity.size();j++){
            tot += capacity[j];
            ans++;
          if(tot>=sum)
          return ans;
        }
        return ans;
    }
};