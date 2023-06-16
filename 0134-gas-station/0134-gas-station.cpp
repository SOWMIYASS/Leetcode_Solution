class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0,total_cost=0,index=0,c_gas=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
            c_gas+=gas[i]-cost[i];
            if(c_gas<0) {
                index=i+1;
                c_gas=0;
            }
        }
        if(total_gas<total_cost) return -1;
        else  return index;
    }
};