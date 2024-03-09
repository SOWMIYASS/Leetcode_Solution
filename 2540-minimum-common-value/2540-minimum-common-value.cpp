class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(auto i:nums1) m[i]++;
        for(auto i:nums2){
            if(m[i]>=1) return i;
            //m[i]++;
        }
        return -1;
    }
};