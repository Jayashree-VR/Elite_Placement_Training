import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String s1 = scan.nextLine();
		String s2 = scan.nextLine();
		String s3 = scan.nextLine();
		if (count(s1) != 5 || count(s2) != 7 || count(s3) != 5) {
			System.out.print("NO");
		} else {
			System.out.print("YES");
		}
		scan.close();

	}

	public static int count(String str) {
		int count = 0;
		for (char ch : str.toCharArray()) {
			if ("aeiou".indexOf(ch) != -1) {
				count++;
			}
		}
		return count;
	}
}