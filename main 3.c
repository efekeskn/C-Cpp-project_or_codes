#include <stdio.h>

int main() {
    char str[] = "12 4.5";
    int num;
    float fnum;
    
    sscanf(str, "%d %f", &num, &fnum);
    
    printf("Integer: %d, Float: %f\n", num, fnum);
    
    return 0;
}
