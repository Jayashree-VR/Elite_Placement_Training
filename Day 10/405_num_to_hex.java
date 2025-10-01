class Solution {
    public String toHex(int num) {
        if (num == 0)
            return "0";

        StringBuilder sb = new StringBuilder();
        int count = 0;

        while (num != 0 && count < 8) {
            int rem = num & 15;
            if (rem < 10) {
                sb.append((char) ('0' + rem));
            } else {
                sb.append((char) ('a' + (rem - 10)));
            }
            num >>>= 4;
            count++;
        }

        return sb.reverse().toString();
    }
}