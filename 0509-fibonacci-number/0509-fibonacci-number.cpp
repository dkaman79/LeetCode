class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        int v1=0,v2=1;
        for(int i=2;i<=n;i++){
            int temp = v1+v2;
            v1=v2;
            v2=temp;
        }
        return v2;
    }
};