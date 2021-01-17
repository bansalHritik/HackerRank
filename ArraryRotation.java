import java.util.Scanner;

/**
 * ArraryRotation
 */
public class ArraryRotation {
    public static void rotate(int[][] arr, int left, int right, int top, int down) {
        int pre;
        int curr;
        pre = arr[top][left];
        for (int i = top + 1; i <= down; i++) {
            curr = arr[i][left];
            arr[i][left] = pre;
            pre = curr;
        }
        for (int i = left + 1; i <= right; i++) {
            curr = arr[down][i];
            arr[down][i] = pre;
            pre = curr;
        }
        for (int i = down - 1; i >= top; i--) {
            curr = arr[i][right];
            arr[i][right] = pre;
            pre = curr;
        }

        for (int i = right - 1; i >= left; i--) {
            curr = arr[top][i];
            arr[top][i] = pre;
            pre = curr;
        }
    }

    public static void print(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();
        int rotationCount = sc.nextInt();
        int[][] arr = new int[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int left = 0;
        int right = col - 1;
        int top = 0;
        int down = row - 1;
        while (top <= down && left <= right) {
            int mod = 2 * ((down - top) + (right - left));
            for (int i = 0; i < rotationCount % mod; i++) {
                rotate(arr, left, right, top, down);
            }
            top++;
            left++;
            right--;
            down--;
        }
        print(arr);
        sc.close();
    }
}