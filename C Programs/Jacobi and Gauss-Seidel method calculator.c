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

    if(n==3 && m==3){
        printf("Your equations look like this:- \n");

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

        printf("%.2fx (+) %.2fy (+) %.2fz = %.2f\n", A1,B1,C1,D1);
        printf("%.2fx (+) %.2fy (+) %.2fz = %.2f\n", A2,B2,C2,D2);
        printf("%.2fx (+) %.2fy (+) %.2fz = %.2f\n", A3,B3,C3,D3);

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
    }
    else if(n==4 && m==4){
        for(a=1;a<m+1;a++){
            printf("a%dw + b%dx + c%dy + d%dz = e%d \n",(a),(a),(a),(a),(a));
        }

        printf("\n");

        float A1,B1,C1,D1,E1,A2,B2,C2,D2,E2,A3,B3,C3,D3,E3,A4,B4,C4,D4,E4;
        for(a=1;a<m+1;a++){
            printf("Enter a%d, b%d, c%d, d%d and e%d: ",(a),(a),(a),(a),(a));
            if((a)==1){
                scanf("%f%f%f%f%f",&A1,&B1,&C1,&D1,&E1);
            }
            else if((a)==2){
                scanf("%f%f%f%f%f",&A2,&B2,&C2,&D2,&E2);
            }
            else if((a)==3){
                scanf("%f%f%f%f%f",&A3,&B3,&C3,&D3,&E3);
            }
            else if((a)==4){
                scanf("%f%f%f%f%f",&A4,&B4,&C4,&D4,&E4);
            }
            else{
                break;
            }
        }

        printf("\n");
        printf("With your input the equations now looks like this:-\n");

        printf("%.2fw (+) %.2fx (+) %.2fy (+) %.2fz = %.2f\n", A1,B1,C1,D1,E1);
        printf("%.2fw (+) %.2fx (+) %.2fy (+) %.2fz = %.2f\n", A2,B2,C2,D2,E2);
        printf("%.2fw (+) %.2fx (+) %.2fy (+) %.2fz = %.2f\n", A3,B3,C3,D3,E3);
        printf("%.2fw (+) %.2fx (+) %.2fy (+) %.2fz = %.2f\n", A4,B4,C4,D4,E4);

        printf("\n");

        printf("Choose the method:\n1) Jacobi's method\n2) Gauss-Seidel's method\n");
        scanf("%d",&c);

        if(c==1){
            printf("How many iterations do you want to calculate?");
            scanf("%d", &m);

            printf("Performing Jacobi's method...\n\n");

            float w,x,y,z,W,X,Y,Z;
            for(a=1,w=0,x=0,y=0,z=0;a<m+1;a++){
                w=W;
                x=X;
                y=Y;
                z=Z;
                W = (E1-(B1*x)-(C1*y)-(D1*z))/A1;
                X = (E2-(A2*w)-(C1*y)-(D1*z))/B2;
                Y = (E3-(A3*w)-(B3*x)-(D1*z))/C3;
                Z = (E4-(A4*w)-(B4*x)-(C4*y))/D4;
                printf("%d)  %f  %f  %f  %f  \n" ,a,W,X,Y,Z);
            }
        }
        else if(c==2){
            printf("How many iterations do you want to calculate?");
            scanf("%d", &m);

            printf("Performing Gauss-Seidel's method...\n\n");

            float w,x,y,z,W,X,Y,Z;
            for(a=1,w=0,x=0,y=0,z=0;a<m+1;a++){
                w=W;
                x=X;
                y=Y;
                z=Z;
                W = (E1-(B1*x)-(C1*y)-(D1*z))/A1;
                X = (E2-(A2*W)-(C1*y)-(D1*z))/B2;
                Y = (E3-(A3*W)-(B3*X)-(D1*z))/C3;
                Z = (E4-(A4*W)-(B4*X)-(C4*Y))/D4;
                printf("%d)  %f  %f  %f  %f  \n" ,a,W,X,Y,Z);
            }
        }

    }
    else if(m!=n){
        printf("Since there are unequal no.of equations and variables, you can't derive a solution.");
    }
    else{
        printf("Invalid input, retry");
    }
    printf("\n\n");
    printf(":D\n\n");
    return 0;
}
