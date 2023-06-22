class Solution {
public:
    double average(vector<int>& salary) {
        int v=salary.size();
        sort(salary.begin(),salary.end());
        int c=0,h=0;
        for(int i=1;i<v-1;i++){
            h++;
            c+=salary[i];
        }
        return (double)c/(v-2);
        
    }
};