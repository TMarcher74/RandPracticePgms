// #include<stdio.h>
// #include<stdlib.h>

// FILE *f1;

// void GCD1(int m, int n){
//     int rem, count=0;
//     while(n!=0){
//         count++;
//         rem=m%n;
//         m=n;
//         n=rem;
//     }
//     fprintf(f1,"%d\t",count);
// }

// void GCD2(int m, int n){
//     int count=0, t,t1,t2;
//     t=(m<=n)?m:n;
//     while(t!=1){
//         count++;
//         t1=m%t;
//         if(t1==0){
//             t2=n%t;
//             if(t2==0)   break;
//         }
//         t--;
//     }
//     fprintf(f1,"%d\n",count);
// }

// int main(){
//     int m,n;
//     f1=fopen("Count.txt","w");
//     for(int i=0;i<=10;i++){
//         m=rand()%1000;
//         n=rand()%1000;
//         fprintf(f1,"\nm=%d\tn=%d\n",m,n);
//         GCD1(m,n);
//         GCD2(m,n);
//     }
//     fclose(f1);
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int count;
// int BinarySearch(int low, int high, int *arr, int key){
//     if(low<=high){
//         int mid=(low+high)/mid;
//         count++;
//         if(arr[mid]==key)   return mid;
//         else(arr[mid] > key)    BinarySearch(low, mid-1, arr, key);
//         BinarySearch(mid+1, high, arr, key);
//     }
// }

// int main(){
//     FILE *f1;
//     f1=fopen("Count1.txt","w");
//     int *arr;

//     srand(time(0));

//     for(int i=1;i<=10;i++){
//         count=0;
//         arr=(int*)malloc(sizeof(int)*i);
//         //avg case
//         for(int j=0;j<n;j++)    arr[j]=rand()%100;
//         key=a[i/2];
//         key=a[i/2+i/4];
//         key=999999;
//         BinarySearch(0,i,arr,key)

//         //best case
//         // arr[0]=rand()%100;
//         // for(int j=1;j<n;j++){
//         //     arr[j]=arr[j-1]+rand()%100;
//         // }

//         // //worst case
//         // arr[0]=rand()%100;
//         // for(int j=1;j<n;j++){
//         //     arr[j]=arr[j-1]-rand()%100;
//         // }

//     }
// }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int count;

void merge(int *b, int n1, int *c, int n2, int *a){
    int i = 0, j = 0, k = 0;
    while(i<n1 && j<n2){
        count++;
        if(b[i]<=c[j])  a[k]=b[i++];
        else    a[k]=c[j++];
        k++;
    }
    if(j==n2){
        while(i<n1) a[k++]=b[i++];
    }
    else{
        while(j<n2) a[k++]=c[j++];
    }
}
