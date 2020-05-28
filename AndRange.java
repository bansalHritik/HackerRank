import java.util.Scanner;

class AndRange {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int diff = a-b;
        int res = 0;
        int i = 0;
        while(a != 0 && b != 0) {
            int b1 = a&1;
            int b2 = b&1;
            if(b1 == 1 && b2 == 1) {
                System.out.println("Both Digits Are 1");
                if(diff < Math.pow(2, i)) {
                    res = res | (1<<i);
                }
                else {
                    System.out.println("Difference Exceced");
                }
            }
            Integer.toBinaryString(res);
        }
        System.out.println("result");
        sc.close();
    }
}