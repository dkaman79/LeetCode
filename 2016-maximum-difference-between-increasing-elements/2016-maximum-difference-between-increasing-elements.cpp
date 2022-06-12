class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = 0, minVal=nums[0];
        for(int j=1; j<nums.size(); j++){
                res = max(res, nums[j]-minVal);
                minVal = min(minVal, nums[j]);
            }
        return res==0 ? -1 : res;
    }
};