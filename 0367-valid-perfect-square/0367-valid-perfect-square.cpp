class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int a;
        a=sqrt(num);
        if(sqrt(num)==a) return true;
        else return false;
    }
};