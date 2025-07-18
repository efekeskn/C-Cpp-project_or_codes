// fibonacci ve Fibonacci tribonacci
import java.util.*;


public class Fibonaccitribonacci
{
    public static void main(String[] args)
    {
        Scanner scan= new Scanner(System.in);
        int a=1,b=1,c;
        int i;
        System.out.print("bir sayi giriniz:");
        i= scan.nextInt();
        System.out.println("fibonacci\n\n-->1\n-->1");
        for(c=0;i>=3;i--)
        {
            c=a+b;
            a=b;
            b=c;
            System.out.println("-->"+c);
        }
        System.out.println("lütfen bir sayi giriniz");
        i=scan.nextInt();
        a=0;b=1;c=1;
        int d;
        System.out.println("tribonacci\n-->0\n-->1\n-->1");
        for(;i>=3;i--)
        {
            d=a+b+c;
            a=b;
            b=c;
            c=d;
            System.out.println("-->"+d);
        }
       
    }
}