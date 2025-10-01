import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int f = scan.nextInt();
		int arr[] = new int[n];
		int w = 0;
		for (int i = 0; i < n; i++) {
			arr[i] = scan.nextInt();
			if (arr[i] > f) {
				w += 2;
			} else {
				w++;
			}
		}
		System.out.print(w);
		scan.close();

	}
}
