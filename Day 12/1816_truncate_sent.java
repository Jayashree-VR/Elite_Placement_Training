class Solution {
    public String truncateSentence(String s, int k) {
        String out = "";
        String[] str = s.split(" ");
        for (int i = 0; i < k - 1; i++) {
            out = out + str[i] + " ";
        }
        out = out + str[k - 1];
        return out;
    }
}