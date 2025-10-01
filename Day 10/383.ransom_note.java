import java.util.Arrays;

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }
        int freq[] = new int[26];
        Arrays.fill(freq, 0);
        for (char c : magazine.toCharArray()) {
            freq[c - 'a']++;
        }
        for (char c : ransomNote.toCharArray()) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
}