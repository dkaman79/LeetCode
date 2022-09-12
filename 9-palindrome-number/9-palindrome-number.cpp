class Solution {
public:
     bool isPalindrome(int x) {
        if(x<0)
            return false;
        long int y=0,num=x;
        while(num!=0)
        {
            y=y*10+num%10;
            num=num/10;
        }
        if(x==y)
            return true;
        return false;          
    }
};