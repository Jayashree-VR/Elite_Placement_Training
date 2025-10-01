import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for (int i = 0; i < n; i++) {
			String s1 = scan.nextLine();
			String s2 = scan.nextLine();
			eql(s1, s2);
		}
		scan.close();
	}

	public static void eql(String s1, String s2) {
		if (s1.equals(s2)) {
			System.out.println("YES");
			return;
		}
		if (s1.length() == 1 && s2.length() == 1) {
			System.out.println("NO");
			return;
		}
		for (int i = 0; i < s2.length(); i++) {
			if (s1.contains(String.valueOf(s2.charAt(i)))) {
				System.out.println("YES");
				return;
			}

		}
		System.out.println("NO");
		return;
	}
}