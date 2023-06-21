class Solution {
public:
    int sumofSquare(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int copy=n;
        while(1){
            if(copy==89) return false;
            if(copy==1) return true;
            copy=sumofSquare(copy);
        }
    } 
};