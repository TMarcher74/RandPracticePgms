#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is even", x);
    }
    else
    {
        printf("%d is odd", x);
    }
    getch();
}
