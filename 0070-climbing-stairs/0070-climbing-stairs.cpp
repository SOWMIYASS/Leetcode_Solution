class Solution {
public:
    int climbStairs(int n) {
        /*if(n==1) return 1;
        if(n==2) return 2;
        return climbStairs(n-1)+climbStairs(n-2);
        */
        if(n==1) return 1;
        if(n==2) return 2;
        int climb[n+1];
        climb[1]=1;
        climb[2]=2;
        for(int i=3;i<=n;i++){
            climb[i]=climb[i-1]+climb[i-2];
        }
        return climb[n];
        
    }
};