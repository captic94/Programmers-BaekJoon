import java.util.Scanner;
import java.io.PrintStream;

public class Main
{
	public static void main(String[] args)
	{
        Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		String[] arr = s.split(" ");
		double a = Double.parseDouble(arr[0]);
		double b = Double.parseDouble(arr[1]);
        
		PrintStream ps = System.out;
		ps.printf("%.10f", a/b);
		
	}
}