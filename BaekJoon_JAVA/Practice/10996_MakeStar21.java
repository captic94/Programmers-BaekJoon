import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		if (n == 1)
			System.out.print("*");
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int up = 0; up < n; up++)
				{
					if (up % 2 == 0)
						System.out.print("*");
					else if ((up % 2 == 1) && up != n - 1)
						System.out.print(" ");
				}
				
				System.out.println();
			
				for (int down = 0; down < n; down++)
				{
					if (down % 2 == 0 && down != n - 1)
						System.out.print(" ");
					else if (down % 2 == 1)
						System.out.print("*");
				}
				
				if (i != n - 1)
					System.out.println();
			}
		}
		
	}
}