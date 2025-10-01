import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String names[] = new String[n];
        for (int i = 0; i < n; i++) {
            String s = scan.nextLine();
            names[i] = s;
            int found = 0;
            for (int j = 0; j < i; j++) {
                if (s.equals(names[j])) {
                    System.out.println("YES");
                    found = 1;
                    break;
                }
            }
            if (found == 0) {
                System.out.println("NO");
            }
        }
        scan.close();
    }
}