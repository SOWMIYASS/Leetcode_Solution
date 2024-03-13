class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return 1;

        int leftSum = 0;
        int rightSum = 0;
        for (int i = 1; i <= n; ++i) {
            rightSum += i;
        }

        for (int pivot = 1; pivot <= n; ++pivot) {
            rightSum -= pivot;
            if (leftSum == rightSum) {
                return pivot;
            }
            leftSum += pivot;
        }

        return -1; // No pivot found
    }
};
