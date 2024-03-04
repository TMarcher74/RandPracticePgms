#include<stdio.h>
#include<math.h>

int main()
{
    int a[100],b,c,d,e,f;

    printf("Enter the number of elements: ");
    scanf("%d",&b);

    printf("Enter the elements: ");
    for(c=0;c<b;c++){
        scanf("%d",&a[c]);
    }
    printf("Your array looks like this: ");
    for(c=0;c<b;c++){
        printf("\n%d",a[c]);
    }

    printf("\nEnter the element and its position respectively: ");
    scanf("%d %d",&d ,&e);
    for(c=b;c>=e;c--){
        a[c] = a[c-1];
        a[e-1] = d;
        b++;
    }
     printf("\nYour array now looks like this: ");
    for(c=0;c<b;c++){
        printf("\n%d",a[c]);
    }

}
