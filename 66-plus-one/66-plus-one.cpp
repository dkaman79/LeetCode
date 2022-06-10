class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n=digits.size()-1;
        
        //this code will work for ex1 & ex2, also for ex4- [4,8,9,9]
       for(int i=n; i>=0; --i){
           if(digits[i]==9){
               digits[i]=0;
           }
           else{
               digits[i]+=1;
               return digits;
           }      
       } 
        //this is for ex3
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};