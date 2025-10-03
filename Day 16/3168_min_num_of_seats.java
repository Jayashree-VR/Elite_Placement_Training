class Solution {
    public int minimumChairs(String s) {
        int max = 0, count = 0;
        for (char ch : s.toCharArray()) {
            if (ch == 'E') {
                count += 1;
            } else {
                count -= 1;
            }
            if (count > max) {
                max = count;
            }
        }
        return max;
    }
}
