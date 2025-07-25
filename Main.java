import java.util.*;
//binom
public class Main 
{
    static int factoriel(int a)
    {
        int b=1;
        while(a>1)
        {
           b*=a; 
           a--;
        }
        return b;
    }
    public static void main(String[] args)
    {
        Scanner scan= new Scanner(System.in);
        int a,b,c,d;
        System.out.print("lutfen 1 sayi giriniz:");
        b=scan.nextInt();
        for(a=0;a<b;a++)
        {
            for(d=b;d>a;d--)
            {
                System.out.print(" ");
            }
            for(c=0;c<=a;c++)
            {
                System.out.print(factoriel(a)/(factoriel(c)*factoriel(a-c)) +"  " );
            }
            System.out.println();
        }
    }
}