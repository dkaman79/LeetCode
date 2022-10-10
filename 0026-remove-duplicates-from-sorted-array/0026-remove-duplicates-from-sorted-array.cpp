class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        if(a.size()<=1){return a.size();}
        int counter = 1;
        for(int i=1;i<a.size();i++){
            if(a[i] != a[i-1]){
                a[counter++] = a[i];
            }
        }
        return counter;
    }
};