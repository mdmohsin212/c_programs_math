#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d", &c);

    if ((a>b) &&(a>c))
    {
        printf("Largest number is %d\n", a);
    }
    else if (b>c)
    {
        printf("Largest number is %d\n", b);
    }
    else
    {
        printf("Largest number is %d", c);
    }
    
    return 0;
}
