class Solution {
    public int longestPalindrome(String s) {
        int[] charCount = new int[52];
        for (char c : s.toCharArray()) {
            if (c >= 'a' && c <= 'z') {
                charCount[c - 'a']++;
            } else if (c >= 'A' && c <= 'Z') {
                charCount[c - 'A' + 26]++;
            }
        }
        int length = 0;
        boolean hasOddCount = false;
        for (int count : charCount) {
            length += count / 2 * 2;
            if (count % 2 == 1) {
                hasOddCount = true;
            }
        }
        if (hasOddCount) {
            length += 1;
        }
        return length;
    }
}
