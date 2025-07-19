import java.util.*;

public class Main
{
    static int ciftmi(int a)
    {
        if(a%2==0)
        return 1;
        else
        return 0;
    }
    public static void main(String[] args)
    {
        int a=1,b=1,c,d;
        Scanner scan=new Scanner(System.in);
        System.out.print("lutfen 1 sayi giriniz:");
        d= scan.nextInt();
        while(d>0)
        {
            d--;
            c=a+b;
            a=b;
            b=c;
            if(ciftmi(c)==1)
            System.out.println(c);
            
        }
        
    }
}