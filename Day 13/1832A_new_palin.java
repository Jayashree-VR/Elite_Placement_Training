import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for (int i = 0; i < t; i++) {
            String s = scan.nextLine();
            if (canFormNewPalindrome(s)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scan.close();
    }

    public static boolean canFormNewPalindrome(String s) {
        int[] freq = new int[26];
        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i) - 'a']++;
        }

        int unique = 0;
        int multiFreq = 0;
        for (int f : freq) {
            if (f > 0)
                unique++;
            if (f >= 2)
                multiFreq++;
        }
        if (unique == 1)
            return false;
        return multiFreq >= 2;
    }
}
