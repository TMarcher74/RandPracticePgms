#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,lim;

    printf("Enter the number to find it's factorial: ");
    scanf("%d",&lim);

    for(a=1,b=1,c=0;c<=lim;a++,c++){
        b=a*b;
        printf("%d\n",b);
    }
}
