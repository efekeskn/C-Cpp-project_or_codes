#include <stdio.h>
#include <stdlib.h>

void display(char std[]);


int main()
{
    char c[10];
    int a=0;
    fgets(c,sizeof(c),stdin);
    
    
    
    printf("%s",c);
    
    puts("efe keskin");
    display(c);
    
    return 0;
}

void display(char str[])
{
    printf("%s",str);
}