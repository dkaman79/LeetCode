class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxEnding = nums[0], n = nums.size();
        int res = nums[0];
        for(int i=1; i<n; i++){
            
          maxEnding = max(maxEnding+nums[i], nums[i]);     
            res = max(res, maxEnding);
        }
        return res;
    }
};