public class BirthdayMain {

    public static void main(String[] args) {
        final String s = "Unccl Oveguqnl!";
        for (int i = 0; i < s.length(); i++) { // rot-13
            char c = s.charAt(i);
            if (c >= 'a' && c <= 'm') {
                c += 13;
            } else if (c >= 'A' && c <= 'M') {
                c += 13;
            } else if (c >= 'n' && c <= 'z') {
                c -= 13;
            } else if (c >= 'N' && c <= 'Z') {
                c -= 13;
            }
            System.out.print(c);
        }
        System.out.println();
    }
}
