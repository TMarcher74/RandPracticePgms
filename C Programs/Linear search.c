#include<stdio.h>
#include<math.h>

int main()
{
    int search,found,A[100],a,b,c,d;

    printf("Enter the numbers into the array (type '00' to end the array) :");
    for(a=0,b=1;a<100;a++,b++){
        scanf("%d",&A[a]);
        if(A[a]==00){
            b--;
            break;
        }
    }

    printf("Enter the number you want to search: ");
    scanf("%d",&search);
    for(a=0;a<100;a++){
        if(A[a]==search){
            found = A[a];
            break;
        }
    }
    printf("Found your number at position %d",a+1);
}
