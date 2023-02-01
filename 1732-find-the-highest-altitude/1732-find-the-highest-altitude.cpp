class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>result_array;
        int max_alti;
        int array_element=gain[0];
        result_array.push_back(0);
        result_array.push_back(gain[0]);
        for(int i=1;i<gain.size();i++){
            array_element=array_element+gain[i];
            result_array.push_back(array_element);
        }
        sort(result_array.begin(),result_array.end());
        return result_array[result_array.size()-1];
    }
};