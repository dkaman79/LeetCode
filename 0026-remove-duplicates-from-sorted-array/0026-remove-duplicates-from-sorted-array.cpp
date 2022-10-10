class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        vector<int> temp;
        temp.push_back(a[0]);
        for(int i = 1; i<a.size(); i++){
            if(a[i-1] != a[i]) {
            temp.push_back(a[i]); 
            
            }
        }
        for(int i=0;i<temp.size();i++){
            a[i] = temp[i];
        }
        
        return temp.size();
    }
};