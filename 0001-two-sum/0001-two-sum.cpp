class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res, v;
        v = nums;
        sort(v.begin(), v.end());
        int left = 0, right = n-1, n1, n2;
        while(left<right){
            if(v[left] + v[right] == target){
                n1 = v[left];
                n2 = v[right];
                break;
            }
            else if(v[left] + v[right] > target)
                right--;
            else
                left++;
                
        }
        for(int i = 0; i<n; i++){
            if(nums[i] == n1)
                res.emplace_back(i);
            else if(nums[i] == n2)
                res.emplace_back(i);
        }
        return res;
    }
};