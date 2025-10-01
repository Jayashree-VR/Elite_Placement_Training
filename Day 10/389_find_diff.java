class Solution {
    public char findTheDifference(String s, String t) {
        char res = 0;
        char s_1[] = s.toCharArray();
        char t_1[] = t.toCharArray();
        for (int i = 0; i < s_1.length; i++) {
            res ^= s_1[i];
        }
        for (int i = 0; i < t_1.length; i++) {
            res ^= t_1[i];
        }
        return res;
    }
}