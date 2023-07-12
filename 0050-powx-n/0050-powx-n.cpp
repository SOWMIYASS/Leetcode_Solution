class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        if(n<0) x=1/x;
        long  n1=labs(n);
        while(n1){
            if(n1%2==1)
               ans*=x;
            x=x*x;
            n1=n1>>1;
        }
        return ans;
    }
};