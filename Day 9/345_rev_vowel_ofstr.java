class Solution {
    public String reverseVowels(String s) {
        char s_c[] = s.toCharArray();
        int i = 0;
        int j = s_c.length - 1;
        while (i < j) {
            if (!isvowel(s_c[i])) {
                i++;
            } else if (!isvowel(s_c[j])) {
                j--;
            } else {
                char temp = s_c[i];
                s_c[i] = s_c[j];
                s_c[j] = temp;
                i++;
                j--;
            }

        }
        return new String(s_c);
    }

    public static boolean isvowel(char c) {
        return "aeiouAEIOU".indexOf(c) != -1;
    }

}