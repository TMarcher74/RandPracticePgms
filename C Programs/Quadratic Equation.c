#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float d,e,f;
    printf("Enter the coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter the coefficient of x: ");
    scanf("%d",&b);
    printf("Enter the constant: ");
    scanf("%d",&c);

    d= (b*b-(4*a*c));
    e= (-b+(sqrt(d)))/2*a;
    f= (-b-(sqrt(d)))/2*a;

    if((d)>=0)
    {
        printf("%f",d);
        printf("The solution to your equation is %f and %f", e, f);
    }
    else if((d)<0)
    {
        printf("%f",d);
        printf("There is no solution since the discriminant is negative");
    }
    else
    {
        printf("Invalid input");
    }
}
