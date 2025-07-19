//amstrong sayilar
#include <stdio.h>

int main()
{
    int a,b,c;
    for(a=100;a<1000;a++)
    {
        b=a;
        c=0;
        while(b>0)
        {
            c+=(b%10)*(b%10)*(b%10);
            b/=10;
        }
        if(c==a)
        printf("%d\n",c);
    }

    return 0;
}
