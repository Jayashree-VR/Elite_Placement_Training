import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int arr[][] = new int[n][2];
		int sum = 0, max = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 2; j++) {
				arr[i][j] = scan.nextInt();
				if (j == 0) {
					sum -= arr[i][j];
				} else {
					sum += arr[i][j];

				}
				if (sum > max) {
					max = sum;
				}
			}
		}
		System.out.print(max);
		scan.close();

	}
}