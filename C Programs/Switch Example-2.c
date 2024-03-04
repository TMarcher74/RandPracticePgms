#include<stdio.h>
#include<math.h>

int main()
{
    int mark;
    char grade;
    printf("Enter your marks: \n");
    scanf("%d",&mark);

    switch(mark){
        case 100:
        case 90:
        case 80:    grade='A';
                    break;
        case 70:
        case 60:    grade='B';
                    break;
        case 50:    grade='C';
                    break;
        case 40:    grade='D';
                    break;
        default:    grade='F';
                    break;
    }
    printf("%c", grade);
    return 0;
}
