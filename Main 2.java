import java.util.*;
//girilen bir sayinin palindom olana kadar tersi ile toplanması


public class Main 
{
    static int palindrome(int b)
    {
        int a=0,d=b;
        while(d>0)
        {
            a=a*10+d%10;
            d/=10;
        }
        if(a==b)
        {
            System.out.println( a+" bu sayi bir palindromdur.");
            return 1;
        }
        else 
        return 0;
    }
    public static void main (String[] args) 
    {
        Scanner scan=new Scanner(System.in);
        System.out.print("lutfen bir sayi giriniz:");
        int a=scan.nextInt(),d=0;
        while(true)
        {
            int b=0,k=a;
            while(k>0)
            {
                b=b*10+k%10;
                k/=10;
            }
            d++;
            if(palindrome(a+b)==1)
            {
                System.out.println("ayrica "+d+" seferde palindroma ulasmistir.");
                break;
            }
            else 
            {
                System.out.println(a+b);
                a=a+b;
            }    
        }
    }
    
}