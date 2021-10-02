public class HappyBirthday {
	public static void main(String[] args) {
		long l1 = 5219805294416650529L;
		long l2 = 7021147456366999818L;
		for (int i = 0; i < 8; i++) {
			System.out.print((char) ((l1 >> (8 * (7 - i))) & 0b1111_1111));
			System.out.print((char) ((l2 >> (8 * (7 - i))) & 0b1111_1111));
		}
	}
}