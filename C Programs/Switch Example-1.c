#include<stdio.h>

int main()
{
    int choice;
    printf("Enter your choice: \n1-Yes \n2-No\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Yes\n");
                break;

        case 2: printf("No\n");
                break;

        default: printf("Default case\n");
    }
    printf("The choice is %d", choice);
    return 0;
}
