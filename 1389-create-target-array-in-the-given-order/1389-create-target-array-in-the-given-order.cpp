class Solution {
public:
   vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    int n = nums.size();
    vector<int> target(n, -1); // Initialize the target array with -1
    
    for (int i = 0; i < n; i++) {
        if (target[index[i]] == -1) {
            target[index[i]] = nums[i];
        } else {
            // Shift elements to the right to make space for the new element
            for (int j = n - 1; j > index[i]; j--) {
                target[j] = target[j - 1];
            }
            target[index[i]] = nums[i];
        }
    }
    
    return target;
}

};