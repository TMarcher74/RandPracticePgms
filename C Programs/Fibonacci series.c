#include<stdio.h>
#include<math.h>

int main()
{
    int lim,a,b,c;

    printf("Enter the limit for the Fibonacci series: ");
    scanf("%d",&lim);

    for(a=0,b=1,c=0;a<=lim;){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}
