// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>

// int size;
// struct Queue{
//     int front; //Index Of front element in Queue
//     int rear; //Index of rear element in Queue
//     int *queue; //Base address of array to store Queue
// }Q;
// //Function to insert an element to rear of Queue
// void insert(int val)
// {
//     //Checking if Queue is Full
//     if(Q.rear==size-1)
//     {
//         printf("Queue is Full\n");
//         printf("Reallocating Memory\n");
//         size++;
//         Q.queue = (int *)realloc(Q.queue,size*sizeof(int)); //Reallocating Array for Queue
//     }
//     if(Q.front==-1)
//     {
//         Q.front = 0; //Initializing First element
//     }
//     Q.rear++;
//     *(Q.queue+Q.rear) = val;
//     printf("Insertion Successful\n");
// }
// //Function to delete the front element of Queue
// void delete()
// {
//     //Checking if Queue is Empty
//     if(Q.front==-1)
//     {
//         printf("Queue is Empty");
//     }
//     else
//     {
//         //Deleting Element from front
//         printf("Deleted Element : %d\n",*(Q.queue+Q.front));
//         Q.front++;
//     }
//     if(Q.front==Q.rear)
//     {
//         Q.front=Q.rear=-1;
//     }
// }
// //Function Display all elements of Queue
// void display()
// {
//     //Checking if Queue is Empty
//     if(Q.rear==-1)
//     {
//         printf("Queue is Empty");
//     }
//     else
//     {
//         for(int i=Q.front;i<=Q.rear;i++)
//         printf("%d\n",*(Q.queue+i));
//     }
// }
// void main()
// {
//     int choice,val;
//     Q.front=Q.rear=-1; //Initializing Empty Queue
//     printf("Enter the Size : ");
//     scanf("%d",&size);
//     Q.queue=(int *)malloc(size*sizeof(int)); //Dynamically Allocating Array for Queue
//     printf("Main Menu\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
//     for(;;)
//     {
//         printf("Enter Your choice : ");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1 : printf("Enter the element to be inserted : ");
//                      scanf("%d",&val);
//                      insert(val);
//                      break;
//             case 2 : delete();
//                      break;
//             case 3 : display();
//                      break;
//             case 4 : printf("!! THANK YOU !!\n");
//                      exit(0);
//             default : printf("Invalid Choice\nEnter Again\n");
//         }
//     }
// }

// int size=20, n=0;

// void read(int *x, int size){
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     if(n>size){
//         printf("Reallocating space...");
//         size++;
//         x=(int *)realloc(x, size*sizeof(int));
//     }
//     printf("Enter the elements: ");
//     for(int i=0; i<n; i++) scanf("%d", (x+i));
// }

// void disp(int *x){
//     if(n==0){ 
//         printf("Empty array");
//         return;
//     }
//     printf("Array: ");
//     for(int i=0; i<n; i++) printf("%d\t", *(x+i));
// }

// void insert_by_pos(int *x,int size){
//     if(n==size){
//         printf("Reallocating space...");
//         size++;
//         x=(int *)realloc(x, size*sizeof(int));
//     }
//     int pos=0, elem=0, temp=0;
//     printf("Enter the position: ");
//     scanf("%d", &pos);
//     printf("Enter the element: ");
//     scanf("%d", &elem);

//     if(pos>-1&&pos<n){
//         for(int i=pos; i<=n; i++){
//             temp=*(x+i);
//             *(x+i)=elem;
//             elem=temp;
//         }
//     }
//     else printf("Invalid pos");
// }

// void delete_by_elem(int *x){
//     if(n<0){
//         printf("Empty array");
//         return;
//     }
//     int elem=0, i=0;
//     printf("Enter the element to be deleted");
//     scanf("%d", &elem);
//     for(i; i<n && *(x+i)!=elem; i++)
//     if(i==n){
//         printf("Element not found");
//         return;
//     }
//     for(i; i<n--; i++){
//         *(x+i)=*(x+i+1);
//     }    
// }

// void reverse(int *x){
//     int t,i;
//     if(n==0)
//     {
//         printf("Array is empty\n");
//         return;
//     }
//     for(i=0;i<n/2;i++)
//     {
//         t=*(x+i);
//         *(x+i)=*(x+n-i-1);
//         *(x+n-i-1)=t;
//     }
// }

// void main()
// {
//     int *a; //Base Address of Array
//     int choice,size;
//     printf("Enter The size\n");
//     scanf("%d",&size);
//     a=(int *)malloc(size*sizeof(int)); //Dynamically Allocating memory for Array
//     printf("Menu\n1.Read\n2.Display\n3.Insert by position\n6.Delete by element\n9.Reverse\n10.Exit\n");
//     for(;;)
//     {
//         printf("Enter Your Choice : ");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1: read(a, size);
//                     disp(a);
//                     break;
//             case 2: disp(a);
//                     break;
//             case 3: insert_by_pos(a,size);
//                     disp(a);
//                     break;
//             case 6: delete_by_elem(a);
//                     disp(a);
//                     break;
//             case 9: reverse(a);
//                     disp(a);
//                     break;
//             default:printf("Invalid Choice\n");
//                     exit(0);
//         }
//     }
// }

// struct node{
//     int item;
//     struct node *llink;
//     struct node *rlink;
// };
// typedef struct node *NODE;

// NODE getnode(int val){
//     NODE temp = (NODE)malloc(sizeof(struct node));
//     temp->item = val;
//     temp->llink = temp;
//     temp->rlink = temp;
//     return temp;
// }

// NODE insert_f(NODE first, int val){
//     NODE temp=getnode(val), prev;

//     if(first==NULL){
//         first = getnode(val);
//         return first;
//     }
//     else{
//         prev = first->llink;
//         temp->llink = first->llink;
//         temp->rlink = first;
//         first->llink = temp;
//         prev->rlink = temp;
//         return temp;
//     }
// }

// NODE delete_r(NODE first){
//     NODE temp, cur;
//     if(first == NULL){
//         printf("Empty list");
//         return first;
//     }
//     else{
//         temp = first->llink;
//         cur = temp->llink;
//         cur->rlink = first;
//         first->llink = cur;
//         free(temp);
//         return first;
//     }
// }

// NODE insert_pos(NODE first, int val, int pos){
//     NODE temp=getnode(val), prev=NULL, cur=first;
//     if(pos==1 && first==NULL){
//         first = insert_f(first, val);
//         return first;
//     }
//     else if(pos!=1 && first==NULL){
//         printf("Invalid position");
//         return first;
//     }
//     else{
//         while(pos!=1 && cur!=first){
//             prev=cur;
//             cur=cur->rlink;
//             pos--;
//         }
//         temp->rlink=cur;
//         cur->llink=temp;
//         prev->rlink=temp;
//         temp->llink=prev;
//         return first;
//     }
// }

// NODE orderlist(NODE first, int val){
//     NODE temp=gentnode(val), cur=first, prev=NULL;
//     do{
//         if(cur->item>temp->item) break;
//         prev=cur;
//         cur=cur->rlink;
//     }while(cur->rlink!=first)
//     temp->rlink=cur;
//     cur->llink=temp;
//     prev->rlink=temp;
//     temp->llink=prev;
//     return first;
// }

// struct  queue{
//     int front, rear;
//     int *q;
// }Q;
// int size=0;

// void insert(){
//     int val;
//     if(Q.front==0 && Q.rear==size-1){
//         printf("Reallocating");
//         size++;
//         Q.q= (int *)realloc(Q.q, size*sizeof(int));
//     }
//     if(Q.front==-1 && Q.rear==-1){
//         Q.front=0;
//     }
//     printf("Enter element");
//     scanf("%d", &val);
//     Q.rear=(Q.rear+1)%size;
//     *(Q.q + Q.rear)=val;
// }

// void delete(){
//     if(Q.front==-1){
//         printf("Empty");
//     }
//     else if(Q.rear==Q.front){
//         printf("Deleted %d",*(Q.q+Q.front));
//         Q.front=Q.rear=-1;
//     }
//     else{
//         Q.front=(Q.front+1)%size;
//     }
// }

// void display(){
//     int i;
//     if(Q.front==-1){
//         printf("Empty");
//     }
//     else{
//         if(Q.front<Q.rear){
//             for(i=Q.front; i<=Q.rear;i++){
//                 printf("\t%d", *(Q.q + i));
//             }
//         }
//         else{
//             for(i=Q.front; i<size-1; i++) printf("\t%d", *(Q.q + i));
//             for(i=0; i<=Q.rear; i++) printf("\t%d", *(Q.q + i));
//         }
//     }
// }

// void main()
// {
//     int choice,val;
//     Q.front=Q.rear=-1; //Initializing Empty Queue
//     printf("Enter the Size : ");
//     scanf("%d",&size);
//     Q.q=(int *)malloc(size*sizeof(int)); //Dynamically Allocating Array for Queue
//     printf("Main Menu\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
//     for(;;)
//     {
//         printf("Enter Your choice : ");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1 : insert();
//                      break;
//             case 2 : delete();
//                      break;
//             case 3 : display();
//                      break;
//             case 4 : printf("!! THANK YOU !!\n");
//                      exit(0);
//             default : printf("Invalid Choice\nEnter Again\n");
//         }
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>

// int n, stk[20], tos = -1;

// void dfs(int graph[][n], int cur, int *vis){
//     vis[cur] = 1;
//     for(int next = 0; next<n; ++next){
//         if ( graph[cur][next] && !vis[next] )
//             dfs(graph, next, vis);
//     }
//     stk[++tos] = cur;
// }

// void main(){
//     printf("Enter num of vertices >>");
//     scanf("%d", &n);

//     int graph[n][n];

//     printf("Enter adjacency matrix of DAG >>");
//     for(int i = 0; i<n; ++i)
//         for(int j = 0; j<n; ++j)
//             scanf("%d", &graph[i][j]);

//     int *vis = (int *)calloc(sizeof(int), n);

//     for(int i = 0; i<n; ++i)
//         if ( !vis[i] )
//             dfs(graph, i, vis);

//     printf("Topological sorting >> \n");
//     for(int i = tos; i>-1; --i)
//         printf("%d  ", stk[i]);

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int count;
// void merge(int *b,int n1,int *c,int n2,int *a)
// {
//     //printf("\t%d\n",count);

//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2){
//         count++;
//         if(b[i]<=c[j])
//             a[k]=b[i++];
//         else
//             a[k]=c[j++];
//         k++;
//     }
//     if(j==n2)
//         while(i<n1)
//             a[k++]=b[i++];
//     else if(i==n1)
//         while(j<n2)
//             a[k++]=c[j++];
// }
// void copy(int *a, int left, int right, int *b){
//     int i=left,j=0;
//     while(i<=right && j<=right){
//         b[j++]=a[i++];
//     }
// }

// void mergesort(int *a,int n){
//     if(n>1){
//         //printf("%d\t",n);
//         int n1=(n/2),n2=(n+1)/2;
//         int *b=(int*)malloc(n1*sizeof(int));
//         int *c=(int*)malloc(n2*sizeof(int));
//         copy(a,0,(n-1)/2,b);
//         copy(a,n/2,n-1,c);
//         mergesort(b,n1);
//         mergesort(c,n2);
//         merge(b,n1,c,n2,a);
//     }
// }

// int main(){
//     int *a,n,i;
//     FILE *F1=fopen("count3.txt","w");
//     srand(time(0));
//     for(int n=10;n<100;n+=10){
//         a=(int*)malloc(n*sizeof(int));
//         //Best case
//         //a[0]=rand()%100;
//         for(i=0;i<n;i++){
//             a[i]=rand()%100;
//         }
//         for(i=0;i<n;i++){
//             printf("%d\t",a[i]);
//         }
//         printf("\n");
//         count=0;
//         mergesort(a,n);
//         for(i=0;i<n;i++){
//             printf("%d\t",a[i]);
//         }
//         fprintf(F1,"%d\n",count);
//         printf("\n");
//     }
//     fclose(F1);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int a[10][10],n,visited[10],acyclic=1;
// int count;
// void dfs(int v)
// {
//     int i;
//     visited[v]=0;
//     for(i=0;i<n;i++)
//     {
//         count++;
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
// printf("\n%d",count);
// }

// #include<stdio.h>
// #include<stdlib.h>

// void main(){
//     int n;
//     printf("Enter num of vertices >> ");
//     scanf("%d", &n);
//     int graph[n][n];

//     printf("Enter the vertices >> ");
//     for(int i = 0; i<n; ++i)
//         for(int j = 0; j<n; ++j)
//             scanf("%d", &graph[i][j]);

//     int *vis = (int *)calloc(sizeof(int), n);

//     vis[0] = 1;
//     int x, y, min, edge = 0, cost = 0;
//     printf("\n\nVertex  ->> Edge \n");
//     while (edge < n - 1){
//         min = 99999;
//         for(int i = 0; i<n; ++i){
//             if ( vis[i] ){
//                 for(int j = 0; j<n; ++j){
//                     if ( !vis[j] && graph[i][j] != 0 ){
//                         if ( min > graph[i][j] ){
//                             x = i;
//                             y = j;
//                             min = graph[x][y];
//                         }
//                     }
//                 }
//             }
//         }
//         printf("%d -- %d  ->>  %d\n", x+1, y+1, graph[x][y]);
//         cost+=min;
//         vis[y] = 1;
//         ++edge;
//     }
//     printf("\nMST cost >> %d\n", cost);
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stu{
	int sid;
	char name[50];
	char branch[50];
	int sem;
	char add[100];
};

void insertStu(){
	FILE *outfile;
	struct Stu stu;
	outfile=fopen("stu.txt","a");
	if(outfile == NULL){
		printf("Error opening file\n");
		return;
	}
	printf("\nEnter SID:");
	scanf("%d",&stu.sid);
	
	while(getchar() != '\n');
	printf("Enter name: ");
	fgets(stu.name,sizeof(stu.name),stdin);
	stu.name[strlen(stu.name)-1]='\0';
	
	printf("Enter branch: ");
	fgets(stu.branch,sizeof(stu.branch),stdin);
	stu.branch[strlen(stu.branch)-1]='\0';
	
	printf("Enter Semester:");
	scanf("%d",&stu.sem);
	
	while(getchar() != '\n');
	printf("Enter address: ");
	fgets(stu.add,sizeof(stu.add),stdin);
	stu.add[strlen(stu.add)-1]='\0';
	
	fprintf(outfile,"\n%d\t%s\t%s\t%d\t %s",stu.sid,stu.name,stu.branch,stu.sem,stu.add);
	
	fclose(outfile);
}

void modifyAddress(int sid){
	FILE *infile,*temp;
	struct Stu stu;
	infile=fopen("stu.txt","r");
	if(infile == NULL){
		printf("Error opening file\n");
		return;
	}
	temp=fopen("temp.txt","w");
	if(temp == NULL){
		printf("Error opening file\n");
		fclose(infile);
		return;
	}
	while(fscanf(infile,"%d%s%s%d%s",&stu.sid,stu.name,stu.branch,&stu.sem,stu.add)!=EOF){
		if(stu.sid==sid){
			printf("Enter new address:");
			scanf("%s",stu.add);
		}
		fprintf(temp,"\n%d %s %s %d %s",stu.sid,stu.name,stu.branch,stu.sem,stu.add);
	}
	fclose(infile);
	fclose(temp);
	remove("stu.txt");
	rename("temp.txt","stu.txt");
}

void deleteStu(int sid){
	FILE *infile,*temp;
	struct Stu stu;
	infile=fopen("stu.txt","r");
	if(infile == NULL){
		printf("Error opening file\n");
		return;
	}
	temp=fopen("temp.txt","w");
	if(temp == NULL){
		printf("Error opening file\n");
		fclose(infile);
		return;
	}
	while(fscanf(infile,"%d%s%s%d%s",&stu.sid,stu.name,stu.branch,&stu.sem,stu.add)!=EOF){
		if(stu.sid!=sid){
			fprintf(temp,"\n%d %s %s %d %s",stu.sid,stu.name,stu.branch,stu.sem,stu.add);
	}
	}
	fclose(infile);
	fclose(temp);
	remove("stu.txt");
	rename("temp.txt","stu.txt");
}

void ListAllStu(){
	FILE *infile;
	struct Stu stu;
	infile=fopen("stu.txt","r");
	if(infile == NULL){
		printf("Error opening file\n");
		return;
	}
	printf("\nSID\tNAME\tBRANCH\tSEMESTER\tADDRESS");
	while(fscanf(infile,"%d%s%s%d%s",&stu.sid,stu.name,stu.branch,&stu.sem,stu.add)!=EOF){
		printf("\n%d\t%s\t %s \t %d\t\t",stu.sid,stu.name,stu.branch,stu.sem);
		puts(stu.add);
	}
	fclose(infile);
}
void ListStuByBranch(char *b){
	FILE *infile;
	struct Stu stu;
	infile=fopen("stu.txt","r");
	if(infile == NULL){
		printf("Error opening file\n");
		return;
	}
	printf("\nSID\tNAME\tBRANCH\tSEMESTER\tADDRESS");
	while(fscanf(infile,"%d%s%s%d%s",&stu.sid,stu.name,stu.branch,&stu.sem,stu.add)!=EOF){
	if(strcmp(stu.branch,b)==0){
		printf("\n%d\t%s\t %s \t %d\t\t",stu.sid,stu.name,stu.branch,stu.sem);
		puts(stu.add);
	}
	}
	fclose(infile);
}

void ListStubyBranchandAddress(char *b, char*a){
	FILE *infile;
	struct Stu stu;
	infile=fopen("stu.txt","r");
	if(infile == NULL){
		printf("Error opening file\n");
		return;
	}
	printf("\nSID\tNAME\tBRANCH\tSEMESTER\tADDRESS");
	while(fscanf(infile,"%d%s%s%d%s",&stu.sid,stu.name,stu.branch,&stu.sem,stu.add)!=EOF){
		if(strcmp(stu.branch,b)==0 && strcmp(stu.add,a)==0){
		printf("\n%d\t%s\t %s \t %d\t\t",stu.sid,stu.name,stu.branch,stu.sem);
		puts(stu.add);
	}
	}
	fclose(infile);
}

int main(){
	int ch,sid;
	char b[50],a[100];
	while(1){
		printf("\nMENU:\n1.Insert a new student\n2.Modify Student address\n3.Delete a Student\n4.List all students\n5.List all students of a specific branch\n6.List all students of a specific branch and living in a particular area\n7.Exit\nEnter choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: 
			insertStu();
			break;
			case 2:
			printf("Enter sid to modify address:\n");
			scanf("%d",&sid);
			modifyAddress(sid);
			break;
			case 3:
			printf("Enter sid to delete student:\n");
			scanf("%d",&sid);
			deleteStu(sid);
			break;
			case 4:
			ListAllStu();
			break;
			case 5:
			printf("Enter branch to list students:\n");
			scanf("%s",b);
			ListStuByBranch(b);
			break;
			case 6:
			printf("Enter branch:\n");
			scanf("%s",b);
			printf("Enter area:\n");
			scanf("%s",a);
			ListStubyBranchandAddress(b,a);
			break;
			case 7:return 0;
			default:printf("Invalid choice! Try again\n");
			break;
		}
	}
	return 0;
}