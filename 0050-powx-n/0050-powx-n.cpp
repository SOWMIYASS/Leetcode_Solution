class Solution {
public:
    double myPow(double x, int n) {
        long double power=1;
        if(n>=INT_MAX){
            return x;
        }
        if(n<=INT_MIN){
            if(x>=2) return 0;
            return 1;
        }
            
        for(int i=0;i<abs(n);i++){
            power*=(x);
        }
        if(n>0){
            return power;
        }
        else{
            return 1/(power);
        }
    }
};