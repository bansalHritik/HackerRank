import java.util.Scanner;

public class EncryptedString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        String str = sc.next();
        int k = sc.nextInt();
        k = k % 26;
        String res = "";
        for (int i = 0; i < size; i++) {
            char ch = str.charAt(i);
            if (Character.isLetter(ch)) {
                char a = Character.isUpperCase(ch)?'A':'a';
                ch = (char)(a + (ch - a + k) % 26);
            }
            res += ch;
        }
        System.out.println(res);
        sc.close();
    }
}