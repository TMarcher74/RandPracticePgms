#include<stdio.h>
#include<math.h>

int main()
{
    int avg,sum,A[100],a,b,c,d;

    printf("Enter the numbers into the array (type '00' to end the array) :");
    for(a=0,b=1;a<100;a++,b++){
        scanf("%d",&A[a]);
        if(A[a]==00){
            b--;
            break;
        }
    }
    printf("\nYour array looks like this: ");
    for(a=0,sum=0;a<b;a++){
        printf("\n%d",A[a]);
        sum = sum + A[a];
    }
    avg = sum/b;
    printf("\nThe average of the array is: %d",avg);
}
