public class HappyBirthday {
	public static void main(String args[]) {
		String birthdayMsg = "48617070792042697274686461792021";
	    for (int i = 0; i < birthdayMsg.length(); i += 2) {
	        String chr = birthdayMsg.substring(i, i + 2);
	        System.out.print((char) Integer.parseInt(chr, 16));
	    }
	}
}
