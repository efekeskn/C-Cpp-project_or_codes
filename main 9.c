#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


int main()
{
    int len;
    
    char str1[]="ABCDEFGH1234";
    char str2[]="ABCD";
    
    len=strspn(str1,str2);
    
    printf("%d",len);
    
    
    
    int let= strpbrk(str1,str2);
    
    
    return 0;
}


