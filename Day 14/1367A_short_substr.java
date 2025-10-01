import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for (int i = 0; i < n; i++) {
			String s = scan.nextLine();
			unique(s);
		}
		scan.close();
	}

	public static void unique(String s) {
		String str = "";
		for (int i = 0; i < s.length() - 1; i++) {

			if (i == 0) {
				str += s.charAt(i);
			} else {
				if (s.charAt(i) == s.charAt(i + 1)) {
					str += s.charAt(i);
					i++;
				}
			}
		}
		str += s.charAt(s.length() - 1);
		System.out.println(str);
	}
}
