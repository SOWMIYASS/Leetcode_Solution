class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int result_array[n+1];
        result_array[0]=0;
        result_array[1]=1;
        for(int i=2;i<=n;i++){
            result_array[i]=result_array[i-1]+result_array[i-2];
        }
       return  result_array[n];
        
    }
};