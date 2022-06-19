class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mpp;  //declared the hash map
    //iterate over the array
        for(int i = 0; i<nums.size(); i++){
            //here we use hash table to FIND the remaiming value is in the map or not
            if(mpp.find(target - nums[i]) != mpp.end()) {
                ans.push_back(mpp[target-nums[i]]); //we return value of index from the map
                ans.push_back(i);
                return ans;
            }
            //if we don't find the number, we put it in the map.
            mpp[nums[i]] = i;
        }
        return ans;
    }
};