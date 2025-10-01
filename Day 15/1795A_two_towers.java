import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for (int i = 0; i < n; i++) {
			int n1 = scan.nextInt();
			int n2 = scan.nextInt();
			scan.nextLine();
			String s1 = scan.nextLine();
			String s2 = scan.nextLine();
			int repeat = 0;
			for (int j = 1; j < n1; j++) {
				if (s1.charAt(j - 1) == s1.charAt(j)) {
					repeat++;
				}
			}
			for (int k = 1; k < n2; k++) {
				if (s2.charAt(k - 1) == s2.charAt(k)) {
					repeat++;
				}
			}
			if (repeat == 0) {
				System.out.println("YES");
			} else if (repeat >= 2) {
				System.out.println("NO");
			} else {
				if (s1.charAt(n1 - 1) == s2.charAt(n2 - 1)) {
					System.out.println("NO");
				} else {
					System.out.println("YES");
				}
			}

		}
		scan.close();
	}
}
