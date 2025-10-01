class Solution {
    public boolean isSubsequence(String s, String t) {
        if (s.length() > t.length()) {
            return false;
        }
        int i = 0;
        int j = 0;
        int count = 0;
        char s_a[] = s.toCharArray();
        char t_a[] = t.toCharArray();
        while (i < s.length()) {
            while (j < t.length()) {
                if (s_a[i] == t_a[j]) {
                    count++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (count == s.length()) {
            return true;
        }
        return false;
    }
}