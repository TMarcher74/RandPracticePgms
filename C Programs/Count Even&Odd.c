#include<stdio.h>
#include<math.h>

int main()
{
    int rem,num,even=0,odd=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    do{
        rem = num%10;
        num = num/10;
        if(rem%2==0)
            even++;
        else
            odd++;
    }while(num>0);

    printf("%d even and %d odd digits", even, odd);
}
