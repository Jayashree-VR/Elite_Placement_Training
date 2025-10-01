import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for (int i = 0; i < n; i++) {
			String s = scan.nextLine();
			int res = change(s);
			System.out.println(res);
		}
		scan.close();
	}

	public static int change(String str) {
		int count = 0;
		String s2 = "codeforces";
		for (int i = 0; i < str.length(); i++) {
			char ch1 = str.charAt(i);
			char ch2 = s2.charAt(i);
			if (ch1 != ch2) {
				count++;
			}
		}
		return count;
	}
}