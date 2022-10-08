class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){return;}
        int i, j=0;
        for(i = 0; i<m+n; i++){
            if(j==n){break;}
            if(nums1[i]>nums2[j] || i == m +j){
                nums1.insert(nums1.begin()+i, nums2[j]);
                nums1.pop_back();
                j++;
            }
            
        }
    }
};