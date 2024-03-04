#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a,b,m,n;
    //float
    printf("How many equations do you want to enter? ");
    scanf("%d", &m);
    printf("How many variables are in your equations? ");
    scanf("%d", &n);

    printf("\n");
    printf("Your equations look like this:- \n");

    if(n==3){
        for(a=0;a<m;a++){
            printf("a%dx + b%dy + c%dz = d%d \n",(a+1),(a+1),(a+1),(a+1));
        }

        printf("\n");

        int A1,B1,C1,D1,A2,B2,C2,D2,A3,B3,C3,D3;
        for(a=1;a<m+1;a++){
            printf("Enter a%d, b%d, c%d and d%d: ",(a),(a),(a),(a));
            if((a)==1){
                scanf("%d%d%d%d",&A1,&B1,&C1,&D1);
            }
            else if((a)==2){
                scanf("%d%d%d%d",&A2,&B2,&C2,&D2);
            }
            else if((a)==3){
                scanf("%d%d%d%d",&A3,&B3,&C3,&D3);
            }
            else{
                break;
            }
        }

        printf("\n");
        printf("With your numbers the equations now look like this:-\n");

        printf("%dx + %dy + %dz = %d\n", A1,B1,C1,D1);
        printf("%dx + %dy + %dz = %d\n", A2,B2,C2,D2);
        printf("%dx + %dy + %dz = %d\n", A3,B3,C3,D3);

        printf("Performing Gauss Elimination...");

    }
    else if(n==4){
        for(a=0;a<m;a++){
        printf("a%dw + b%dx + c%dy +d%dz = e%d \n",(a+1),(a+1),(a+1),(a+1),(a+1));
        }

    }
    return 0;
}
