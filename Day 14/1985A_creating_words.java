import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for (int i = 0; i < n; i++) {
			String s1 = scan.next();
			String s2 = scan.next();
			if (s1.charAt(0) == s2.charAt(0)) {
				System.out.println(s1 + " " + s2);
			} else {
				swap(s1, s2);
			}
			scan.close();
		}
	}

	public static void swap(String s1, String s2) {
		String res = "";
		res += s2.charAt(0);
		for (int i = 1; i < s1.length(); i++) {
			res += s1.charAt(i);
		}
		res += " ";
		res += s1.charAt(0);
		for (int i = 1; i < s2.length(); i++) {
			res += s2.charAt(i);
		}
		System.out.println(res);
	}
}