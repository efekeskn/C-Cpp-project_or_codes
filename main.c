//1 1 2 3 5 8 13 21 34 55 
#include <stdlib.h>
#include <stdio.h>
int fibonacci(int a)
{
    if(a==1 || a==2)
    return 1;
   return fibonacci(a-1)+fibonacci(a-2);
}

int main()
{
    int a=fibonacci(7);

    printf("%d-",a);
    return 0;
}
