#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    printf("Enter the two numbers you want to find the LCM of:");
    scanf("%d %d",&a,&b);
    d = a*b;

    if(a==b){
        printf("The LCM is %d",a);
    }
    else if((a%b==0)){
        printf("The LCM is %d",a);
    }
    else if((b%a==0)){
        printf("The LCM is %d",b);
    }
    else {
        printf("The LCM is %d",d);
    }
}
