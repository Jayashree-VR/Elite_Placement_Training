import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for (int i = 0; i < n; i++) {
			String s = scan.nextLine();
			if (check(s)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
		scan.close();
	}

	public static boolean check(String str) {
		if (str.length() % 2 != 0) {
			return false;
		}
		int h = str.length() / 2;
		String s1 = str.substring(0, h);
		String s2 = str.substring(h, str.length());
		if (s1.equals(s2)) {
			return true;
		}
		return false;
	}
}