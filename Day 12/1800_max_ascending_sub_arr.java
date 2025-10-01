class Solution {
    public int maxAscendingSum(int[] nums) {
        int max = nums[0];
        int sum = nums[0];
        for (int n = 1; n < nums.length; n++) {
            if (nums[n - 1] < nums[n]) {
                sum += nums[n];
                if (sum > max) {
                    max = sum;
                }
            } else {
                sum = nums[n];
                continue;
            }
        }
        return max;
    }
}