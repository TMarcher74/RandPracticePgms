#include<stdio.h>
#include<math.h>

int main()
{
    int a[50],b,c,d,e,f;

    printf("Enter the number of elements: ");
    scanf("%d",&b);
    printf("\nEnter the elements: ");
    for(c=0;c<b;c++){
        scanf("%d",&a[c]);
    }
    printf("Your array looks like this: ");
    for(c=0;c<b;c++){
        printf("\n%d",a[c]);
    }

    printf("\nEnter the element's position to delete it: ");
    scanf("%d",&d);
    b--;
    for(c=d-1;c<b;c++){
        a[c]=a[c+1];
    }
    printf("\nYour array now looks like this: ");
    for(c=0;c<b;c++){
        printf("\n%d",a[c]);
    }

}
