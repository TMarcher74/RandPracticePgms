#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i ,x=5;
    int ***p1, **p2, *p3;

    p1=&p2;
    p2=&p3;
    p3=&x;

    printf("%d = %d = %d\n", ***p1, **p2, *p3);

    // int a[5]={1,2,3,4,5};
    // for(i=0;i<5;i++){
    //     printf("%d - %d\n", *(a+i), a[i]);
    // }

    // int (*b)[10]={1,2,3,4,5};
    // printf("%p", *(b));
}

