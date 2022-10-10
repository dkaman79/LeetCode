class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        if(n<=1){return n;}
        int counter = 1;
        for(int i=1;i<n;i++){
            if(a[i] != a[i-1]){
                a[counter++] = a[i];
            }
        }
        return counter;
    }
};