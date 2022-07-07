class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int h){
        int n1 = m-l+1, n2 = h-m;
        
        vector<int> x(arr.begin()+l, arr.begin()+m+1);       // making temp array for 1st segment 
        vector<int> y(arr.begin()+m+1, arr.begin()+h+1);    // making temp array for  2nd segment
        
        int i = 0, j = 0, k = l;
        
        while(i<n1 && j<n2)                   // standard merging algo as explained in video
            arr[k++] = (x[i]<y[j]) ? x[i++] : y[j++];
        while(i<n1)
            arr[k++] = x[i++];
        while(j<n2)
            arr[k++] = y[j++];         
	} 
    
    
    void mergeSort(vector<int>& arr, int l, int h){
        if(l<h){
            int m = l + (h-l)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, h);
            merge(arr, l, m, h);
        }
    }
    
    
    
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};