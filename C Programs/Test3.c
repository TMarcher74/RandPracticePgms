#include<stdio.h>
#include<stdlib.h>

// void main()
// {
//     int array1[20][20],array2[20][20],arraysum[20][20],arraydif[20][20];
//     int i,j,m,n,option;

//     printf("Enter the number of rows and columns:\n");
//     scanf("%d %d",&m,&n);

//     printf("Enter the elements of array1: \n");
//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             scanf("%d",&array1[i][j]);
     
//     printf("Array 1:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//             printf("%3d",array1[i][j]);
//         printf("\n"); 
//     }
//     printf("Enter the elements of array2: \n");
//     for(i=0;i<m;i++)
//         for(j=0;j<n;j++)
//             scanf("%d",&array1[i][j]);
     
//     printf("Array 2:\n");
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//             printf("%3d",array1[i][j]);
//         printf("\n"); 
//     }
    
//     printf("Choose your option: 1.Addition 2.Subtraction\n");
//     scanf("%d",&option);

//     switch(option)
//     {
//         case 1:
//             for(i=0;i<m;i++)
//                 for(j=0;j<n;j++)
//                     arraysum[i][j]=array1[i][j]+array2[i][j];

//             printf("Sum matrix is:\n");
//             for(i=0;i<m;i++)
//             {
//                 for(j=0;j<n;j++)
//                     printf("%3d",arraysum[i][j]);
//                 printf("\n");
//             }
//             break;
//         case 2:
//             for(i=0;i<n;i++)
//                 for(j=0;j<n;j++)
//                     arraydif[i][j]=array1[i][j]-array2[i][j];

//             printf("Difference matrix is:\n");
//              for(i=0;i<m;i++)
//              {
//                 for(j=0;j<n;j++)
//                     printf("%3d",arraydif[i][j]);
//                 printf("\n");
//              }
//             break;
//             default:
//             printf("Invalid option\n");
//     }
// }

// int main()
// {    
//     int a=1,b;
//     int *p;
//     float x=1.05;

//     p=&a;
//     b=*p;

//     printf("%d\n", &p);
//     printf("%d", b);
// }

// int facto(int n)
// {
//     //int n;
//     if(n>=1)
//         return facto(n-1)*n;
//     else
//         return 1;
// }

// int main()
// {
//     int n;
    
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Factorial of %d is %d", n, facto(n));
// }

// void func(int a, int b)
// {
//     a+=b;
//     printf("a= %d and b= %d",a,b);
// }

// int main()
// {
//     int x=5,y=7;
//     func(x,y);
//     printf("\nx= %d and y= %d",x,y);
// }

// struct node
// {
//     int data;
//     struct node* next;
// };

// typedef struct node* NODE;
// NODE head;

// void insertfront()
// {
//     int item;
//     NODE newnode;
//     newnode=(NODE)malloc(sizeof(struct node));

//     if(newnode==NULL)
//     printf("overflow\n");

//     else
//     {
//         printf("Enter the value\n");
//             scanf("%d",&item);
//         newnode->data = item;
//         newnode->next =head;
//         head=newnode;

//     }
// }

// void insertrear()
// {
//     NODE newnode,temp;
//     newnode=(NODE)malloc(sizeof(struct node));
//     int value;

//     if(newnode!= NULL)
//     {
//         printf("OVERFLOW\n");
//     }
//     else
//     {
//         printf("Enter the value:\n");
//             scanf("%d",&value);
//         newnode->data=value;
//         if(head!=NULL)
//         {
//             newnode->next=NULL;
//             head=newnode;
//         }
//         else
//         {
//             temp=newnode;
//             while(temp->next!=NULL) 
//             {
//               temp=temp->next;
//             }   
//               temp->next=newnode;
//               newnode->next=NULL;
//         }
//     }
    
// }

// void insertpos()
// {
//     NODE newnode,temp;
//     int i,loc,value;
//     newnode=(NODE)malloc(sizeof(struct node));

//     if(newnode==NULL)
//     {
//         printf("OVERFLOW\n");

//     }
//     else 
//     {
//     printf("Enter the element you want to enter:\n");
//         scanf("%d",&value);
//     newnode->data=value;
//     printf("Enter the position after you which you want to enter the element\n");
//         scanf("%d",&loc);
//     temp=head;
//     for(i=0;i<loc;i++)
//     {
//         temp=temp->next;
//         if(temp==NULL)
//         {
//             printf("Cant insert\n");
//             return;
//         }
        
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
//     }
// }
// void print()
// {
//     NODE newnode;
//     newnode=head;
//     if(newnode==NULL)
//     {
//         printf("The list is empty\n");
//     }
//     else
//     {
//         printf("The linked list:\n");
//         while(newnode!=NULL)
//         {
//             printf("%d",newnode->data);
//             newnode=newnode->next;
//         }
//     }

// }

// int main()
// {
//     int ch=0;
//     while(ch!=0)
//     {
//         printf("\nEnter the operation to be performed\n");    
//         printf("\n1.Insert in the begining\n2.Insert at last\n3.Insert at any specified position\n4.PRINT\n5.EXIT");           
//         scanf("\n%d",&ch);  
//         switch(ch)  
//         {       
//             case 1:  
//             insertfront();       
//             break;  
//             case 2:  
//             insertrear();         
//             break;  
//             case 3:  
//             insertpos();  
//             break;  
//             case 4:
//             print();
//             break;
//             case 5: 
//             exit(0);
//             break;
//             default:
//             printf("Enter valid choice\n");

//         }    
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// void swap(int *a, int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }
// int count;
// void insertion(int *a, int n){
//     int i,j,temp;
//     for(i=1;i<n;i++){
//         temp = a[i];
//         for(j=i-1;j>=0;j--){
//             count++;
//             if(a[j] > temp){
//                 a[j+1]=a[j];
//             }else{
//                 break;
//             }
//         }
//         a[j+1]=temp;
//     }
// }

// int main(){
//     int *arr,i,j;
//     FILE *fp, *fpc;
//     fp = fopen("Insertion.txt","w");
//     fpc = fopen("InsertionCount.txt","w");
//     srand(time(0));
    
//     for(int n=10;n<100;n+=10){
//         arr=(int*)malloc(n*sizeof(int));
//         //Best case
//         arr[0]=rand()%100;
//         fprintf(fp,"%d\t",arr[0]);
//         count=0;
//         for(i=1;i<n;i++){
//             arr[i]=arr[i-1]-rand()%100;
//             fprintf(fp,"%d\t",arr[i]);
//         }
//         fprintf(fp,"\n");
//         insertion(arr,n);
//         for(i=0;i<n;i++){
//             fprintf(fp,"%d\t",arr[i]);
//         }
//         fprintf(fpc,"%d\n",count);
//     }
    
// }

// #include <stdio.h>
// #include <stdlib.h>
// int a[10][10],n,visited[10],acyclic=1;

// void dfs(int v)
// {
//     int i;
//     visited[v]=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[v][i]&& visited[i] == 0)
//         {
//             acyclic=0;
//             //printf("%d-->%d\n",v+1,i+1);
//         }
//         if(a[v][i]&& visited[i] == -1)
//         {
//             //printf("%d-->%d\n",v+1,i+1);
//             printf("Visit order: %d\n",i+1);
//             dfs(i);
//         }
//     }
//     visited[v] = 1;
//     printf("Deadend order: %d\n",v+1);
// }

// void connectandcyclic()
// {
//     int i=0;
//     while(i<n)
//     {
//         if(visited[i] != 1)
//         break;
//         i++;
//     }
//     if(i==n)
//         printf("Graph is Connected\n");
//     else
//     {
//         printf("Graph is not Connected\n");
//         dfs(i);
//     }
//     if(acyclic)
//         printf("Graph is Acyclic\n");
//     else
//         printf("Graph is Cyclic\n");
// }

// void main()
// {
// int i,j,start=0;
// printf("Enter the number of nodes : ");
// scanf("%d",&n);
// for(i=0;i<n;i++)
// visited[i]=-1;
// printf("Enter the adjacency matrix\n");
// for(i=0;i<n;i++)
// for(j=0;j<n;j++)
// scanf("%d",&a[i][j]);
// printf("Visit order: %d\n",start+1);
// dfs(start);
// connectandcyclic();
// for(i=0;i<n;i++)
// for(j=0;j<n;j++)
// if(a[i][j]) printf("%d-->%d\n",i+1,j+1);
// }

// #include<stdio.h>
// #include<stdlib.h>

// int T[10][10], V[10] = {0}, W[10] = {0};

// int max(int a, int b){
//     if (a>b)    return a;
//     else    return b;
// }

// int knap(int i, int j){
//     int value;
//     if (T[i][j] == -1){
//         if ( j < W[i] )
//             value = knap(i-1, j);
//         else
//             value = max(knap(i-1, j) , V[i] + knap(i-1, j-W[i]));
//         T[i][j] = value;
//     }
//     return T[i][j];
// }

// void main(){
//     int n, m;
//     printf("Enter num of items >> ");
//     scanf("%d", &n);
//     printf("Enter capacity of sack >> ");
//     scanf("%d", &m);
//     printf("Enter weight and value >>\n");
//     for(int i = 1; i<n+1; ++i)  
//         scanf("%d%d", &W[i], &V[i]);

//     for(int i = 0; i<n+1; ++i){
//         for(int j = 0; j<m+1; ++j){
//             if ( i == 0 || j == 0 )
//                 T[i][j] = 0;
//             else 
//                 T[i][j] = -1;
//         }
//     }

//     printf("\nMaximum value of sack >> %d\n", knap(n, m));
//     printf("TABLE --> \n");
//     for(int i = 0; i<n+1; ++i){
//         for(int j = 0; j<m+1; ++j)
//             printf("%d\t", T[i][j]);
//         printf("\n");
//     }
//     printf("\nComposition of sack >> \n");
//     for(int i = n; i>0; --i){
//         if ( T[i][m] != T[i-1][m] ){
//             printf("%d  ", i);
//             m = m - W[i];
//         }
//     }
// }

