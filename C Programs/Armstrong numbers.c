#include<stdio.h>
#include<math.h>

int main()
{
    int n=1,lim,dig,sum,num;

    printf("Enter the limit for finding Armstrong's numbers: ");
    scanf("%d",&lim);

    do{
        sum=0;
        num=n;
        do{
            dig = num%10;
            sum = sum + pow(dig,3);
            num = num/10;
        }while(num>0);
        if(sum==n)
            printf("\n\t%d", n);
        n++;
    }while(n<lim);
}
