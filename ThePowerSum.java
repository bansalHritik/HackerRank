import java.util.Scanner;

public class ThePowerSum {
    public static int getNumberOfWays(int X, int N, int i, int[] arr) {
        int num = (int) Math.pow(i, N);
        if (num == X) {
            arr[i] = 1;
            return 1;
        } else if (num < X) {
            if (arr[i] != -1) {
                arr[i] = getNumberOfWays(X, N, i + 1, arr) + getNumberOfWays(X - num, N, i + 1, arr);
                return arr[i];
            } else {
                return arr[i];
            }

        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int N = sc.nextInt();
        int arr[] = new int[X + 1];
        int ways = getNumberOfWays(X, N, 1, arr);
        System.out.println(ways);
        sc.close();
    }
}