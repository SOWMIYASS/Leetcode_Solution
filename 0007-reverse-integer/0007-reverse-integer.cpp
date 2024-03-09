class Solution {
public:
    int reverse(int x) {
         if(x<=INT_MIN && x>=INT_MAX)return 0;
        long int rev=0;
        while(x){
            rev=(rev*10)+(x%10);
            x=x/10;
        }
        if(rev<=INT_MAX && rev >= INT_MIN)
         return rev;
        else return 0;
    }
};