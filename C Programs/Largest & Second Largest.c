#include<stdio.h>
#include<math.h>

int main()
{
    int lar1,lar2,A[100],a,b,c,d;

    printf("Enter the numbers into the array (type '00' to end the array) :");
    for(a=0,b=1;a<100;a++,b++){
        scanf("%d",&A[a]);
        if(A[a]==00){
            b--;
            break;
        }
    }
    printf("Your array looks like this: ");
    for(a=0;a<b;a++){
        printf("\n%d",A[a]);
    }
    lar1=A[0];
    lar2=A[1];
    for(a=1;a<b;a++){
        if(A[a]>lar1){
            lar2 = lar1;
            lar1 = A[a];
        }
        else if(A[a]>lar2){
            lar2 = A[a];
        }
    }
    printf("\nThe largest number is %d and the second largest number is %d.",lar1,lar2);
}
