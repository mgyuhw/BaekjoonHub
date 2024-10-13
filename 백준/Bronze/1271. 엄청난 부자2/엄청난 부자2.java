import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		BigInteger money = new BigInteger("0");
		BigInteger count = new BigInteger("0");

		Scanner scan = new Scanner(System.in);

		money = scan.nextBigInteger();
		count = scan.nextBigInteger();

		System.out.println(money.divide(count));
		System.out.println(money.remainder(count));

	}

}
