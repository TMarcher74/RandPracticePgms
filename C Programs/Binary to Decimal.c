#include<stdio.h>
#include<math.h>

int main()
{
    int k,n,o,p=0,sum=0;

    printf("Enter a binary number: ");
    scanf("%d", &n);
    o=n;
    do{
        k = n%10;
        sum = sum + k*pow(2,p);
        p++;
        n = n/10;
    }while(n!=0);
    printf("Decimal equivalent of %d is %d.", o,sum);
}
