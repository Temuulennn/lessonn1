#include <stdio.h>
int main()
{
    int a=12, b=18, r=0;
    printf("utga:");
    do {
        r=(a==b) ? (a) : ((a/b) ? (a-b) : (b-a));
        b=a; a=r;
    } while (a!=b);
    printf("a=%d",a);
    return 0;
}
