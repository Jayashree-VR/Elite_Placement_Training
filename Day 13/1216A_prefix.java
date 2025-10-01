import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        scan.nextLine();
        String s = scan.nextLine();
        int count = 0;
        char s1[] = s.toCharArray();
        for (int i = 0; i < s1.length; i += 2) {
            if (s1[i] == s1[i + 1]) {
                count++;
                s1[i + 1] = (s1[i] == 'a') ? 'b' : 'a';
            }

        }
        System.out.println(count);
        System.out.println(new String(s1));
        scan.close();
    }

}
