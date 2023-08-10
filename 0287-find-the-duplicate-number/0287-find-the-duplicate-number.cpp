class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums){
            if(m.count(i)) return i;
            else m[i]++;
        }
        return 0;
    }
};