#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    float s,Area;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);

    if ((a+b>c) && (b+c>a) && (c+a>b))
    {
        s = (a+b+c)/2.0;
        Area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("triangle Area is %f\n", Area);
    }
    
    else{
        printf("Triangle is not possiable");
    }

    return 0;
}
