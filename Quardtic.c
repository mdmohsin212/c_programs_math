#include <stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    float x1,x2,x;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enetr value of c : ");
    scanf("%d", &c);
    d = (b*b)-(4*a*c);

    if (d>0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("Roots are %f and %f",x1,x2);
    }
    else if (d==0)
    {
        x = (-b)/(2*a);
        printf("Root are %f",x);
    }
    else
    {
        printf("Roots are not possiable");
    }
    return 0;
}