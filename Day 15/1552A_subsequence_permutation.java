import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for (int i = 0; i < n; i++) {
			scan.nextLine();
			String s = scan.nextLine();
			int res = count(s);
			System.out.println(res);
		}
		scan.close();
	}

	public static int count(String str) {
		char[] s = str.toCharArray();
		for (int i = 0; i < s.length; i++) {
			for (int j = 1; j < s.length; j++) {
				if (s[j - 1] > s[j]) {
					char temp = s[j - 1];
					s[j - 1] = s[j];
					s[j] = temp;
				}
			}

		}
		String s1 = new String(s);
		int count = 0;
		for (int i = 0; i < s.length; i++) {
			if (str.charAt(i) != s1.charAt(i)) {
				count++;
			}
		}
		return count;
	}
}
