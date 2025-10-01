import java.util.*;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for (int i = 0; i < n; i++) {
			int num = scan.nextInt();
			int res;
			if (num < 100) {
				res = n % 10;
			} else {
				res = digits(num);
			}

			System.out.println(res);
		}
		scan.close();

	}

	public static int digits(int n) {
		int min = n % 10;
		;
		while (n > 0) {
			int temp = n % 10;
			if (temp < min) {
				min = temp;
			}
			n /= 10;
		}
		return min;
	}
}
