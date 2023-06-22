class Solution {
public:
    int smallestEvenMultiple(int n) {
        int copy=n;
        int a=2;
        while(a!=n){
            if(a>n) a=a-n;
            else n=n-a;
        }
        return (copy*2)/a;
    }
};