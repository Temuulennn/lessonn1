#include <stdio.h>
#include <math.h>

 int main()
{
    int a = 1, b = 3, c = 2, d;
    float p1, p2;
    d=b*b-4*a*c;
    if (d>0){
        p1=(-b+sqrt(d))/2*a;
        p2=(-b-sqrt(d))/2*a;
        printf("%.1f %.1f\n", p1, p2);
        else if(d==0){
            p1=-6/2*a;
            printf("%.1f\n"), p1;
        }
        else printf("Шийдгүй\n");
    }
    return 0;
}