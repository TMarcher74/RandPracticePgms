#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a,b,c,m,n;

    printf("How many equations do you want to enter? ");
    scanf("%d", &m);
    printf("How many variables are in your equations? ");
    scanf("%d", &n);

    printf("\n");

    printf("Your equations look like this:- \n");
    if(n==3 && m==3){
        for(a=1;a<m+1;a++){
            printf("a%dx + b%dy + c%dz = d%d \n",(a),(a),(a),(a));
        }

        printf("\n");

        float A1,B1,C1,D1,A2,B2,C2,D2,A3,B3,C3,D3;
        for(a=1;a<m+1;a++){
            printf("Enter a%d, b%d, c%d and d%d: ",(a),(a),(a),(a));
            if((a)==1){
                scanf("%f%f%f%f",&A1,&B1,&C1,&D1);
            }
            else if((a)==2){
                scanf("%f%f%f%f",&A2,&B2,&C2,&D2);
            }
            else if((a)==3){
                scanf("%f%f%f%f",&A3,&B3,&C3,&D3);
            }
            else{
                break;
            }
        }

        printf("\n");
        printf("With your input the equations now looks like this:-\n");

        printf("%fx (+) %fy (+) %fz = %f\n", A1,B1,C1,D1);
        printf("%fx (+) %fy (+) %fz = %f\n", A2,B2,C2,D2);
        printf("%fx (+) %fy (+) %fz = %f\n", A3,B3,C3,D3);

        printf("\n");

        printf("Choose the method:\n1) Jacobi's method\n2) Gauss-Seidel's method\n");
        scanf("%d",&c);

        if(c==1){
            printf("How many iterations do you want to calculate?");
            scanf("%d", &m);

            printf("Performing Jacobi's method...\n\n");

            float x,y,z,X,Y,Z;
            for(a=1,x=0,y=0,z=0;a<m+1;a++){
                x=X;
                y=Y;
                z=Z;
                X = (D1-(B1*y)-(C1*z))/A1;
                Y = (D2-(A2*x)-(C2*z))/B2;
                Z = (D3-(A3*x)-(B3*y))/C3;
                printf("%d)  %f  %f  %f  \n" ,a,X,Y,Z);
            }
        }
        else if(c==2){
            printf("How many iterations do you want to calculate?");
            scanf("%d", &m);

            printf("Performing Gauss-Seidel's method...\n\n");

            float x,y,z,X,Y,Z;
            for(a=1,x=0,y=0,z=0;a<m+1;a++){
                x=X;
                y=Y;
                z=Z;
                X = (D1-(B1*y)-(C1*z))/A1;
                Y = (D2-(A2*X)-(C2*z))/B2;
                Z = (D3-(A3*X)-(B3*Y))/C3;
                printf("%d)  %f  %f  %f  \n" ,a,X,Y,Z);
            }
        }
        printf("\n\n");
        printf(":D\n\n");
    }

    else if(n==4 && m==4){
        printf("In development...");
    }

    else if(m!=n){
        printf("Since there are unequal no.of equations and variables, you cant derive a solution.");
    }

    return 0;
}
