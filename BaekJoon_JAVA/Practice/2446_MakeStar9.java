import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int dr = 1;
        
        for (int i = 0; i >= 0; i += dr)
        {
        	for (int j = 0; j < 2 * n - 1; j++)
        	{
        		if (j < i)
        			System.out.print(" ");
        		else if(2 * n - 1 - i >= j)
        			System.out.print("*");
        	}
        	
        	System.out.println();
        	if (i == n)
        		dr = -1;
        }
		
	}
}
