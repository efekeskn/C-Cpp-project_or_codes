import java.util.*;
// java ile dik ve ikizkenar üçgen yapmak

public class Main
{
    public static void main(String [] args)
    {
        Scanner scan= new Scanner(System.in);
        int a,b,c;
        System.out.print("lutfen girmek istediginiz sayiyi giriniz:");
        a= scan.nextInt();
        for(b=0;b<a;b++)
        {
            for(c=0;c<=b;c++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
         for(b=0;b<a;b++)
         {
            for(int d=a;d>b;d--)
                {
                    System.out.print(" ");
                }
            for(c=0;c<=2*b;c++)
            {
                System.out.print("*");
            }
            System.out.println();
         }
    }
}