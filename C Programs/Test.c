//Program to implement FCFS algorithm
/*
#include<stdio.h>
#include<stdlib.h>

void Swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
}

void SS(int *a,int n,int *pid,int *bt){
        int min;
        for(int i=0;i<n;i++){
                min=i;
                for(int j=i+1;j<n;j++){
                        if(a[j] < a[min])
                                min=j;
                }
                Swap(&a[i],&a[min]);
                Swap(&pid[i],&pid[min]);
                Swap(&bt[i],&bt[min]);
        }
}

void main(){
        int pid[5],at[5],bt[5],ct[5],tt[5],wt[5],i,n,ttt=0,twt=0,min;
        printf("Enter the number of processes\n");
        scanf("%d",&n);
        printf("Enter the Arrival Time for all processes\n");
        for(i=0;i<n;i++){
                pid[i]=i+1;
                scanf("%d",&at[i]);
        }
        printf("Enter the Burst Time for all processes\n");
        for(i=0;i<n;i++)
                scanf("%d",&bt[i]);
        SS(at,n,pid,bt);
        ct[0]=bt[0];
        for(i=1;i<n;i++)
                ct[i]=ct[i-1]+bt[i];
        for(i=0;i<n;i++){
                tt[i]=ct[i]-at[i];
                wt[i]=tt[i]-bt[i];
        }

        printf("PID\tAT\tBT\tCT\tTT\tWT\n");
        for(i=0;i<n;i++){
                printf("p%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tt[i],wt[i]);
                ttt+=tt[i];
                twt+=wt[i];
        }
        printf("Average Turn Around Time: %.2f\n",(float)(ttt)/n);
        printf("Average Wait Time: %.2f\n",(float)(twt/n));
}
*/

// #include<stdio.h>
// #include<stdlib.h>

// void Swap(int *a,int *b){
//         int t=*a;
//         *a=*b;
//         *b=t;
// }

// void SS(int *a,int n,int *pid){
//         int min;
//         for(int i=0;i<n;i++){
//                 min=i;
//                 for(int j=i+1;j<n;j++){
//                         if(a[j] < a[min])
//                                 min=j;
//                 }
//                 Swap(&a[i],&a[min]);
//                 Swap(&pid[i],&pid[min]);
//         }
// }

// void main(){
//         int pid[5],at[5],bt[5],ct[5],tt[5],wt[5],i,n,ttt=0,twt=0,min;
//         printf("Enter the number of processes\n");
//         scanf("%d",&n);
//         printf("Enter the Burst Time for all processes\n");
//         for(i=0;i<n;i++){
//                 at[i]=0;
//                 pid[i]=i+1;
//                 scanf("%d",&bt[i]);
//         }
//         SS(bt,n,pid);
//         ct[0]=bt[0];
//         for(i=1;i<n;i++)
//                 ct[i]=ct[i-1]+bt[i];
//         for(i=0;i<n;i++){
//                 tt[i]=ct[i]-at[i];
//                 wt[i]=tt[i]-bt[i];
//         }

//         printf("PID\tAT\tBT\tCT\tTT\tWT\n");
//         for(i=0;i<n;i++){
//                 printf("p%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],ct[i],tt[i],wt[i]);
//                 ttt+=tt[i];
//                 twt+=wt[i];
//         }
//         printf("Average Turn Around Time: %.2f\n",(float)(ttt)/n);
//         printf("Average Wait Time: %.2f\n",(float)(twt)/n);
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<sys/types.h>
// #include<dirent.h>
// int main(int argc, char* argv)
// {
//         DIR *dp;
//         struct dirent *dirp;
//         if(argc!=2) exit(1);
//         if(dp=opendir(argv[1]) == NULL) exit(1);
//         while((dirp=readdir(dp))!= NULL)
//                 printf("%s\n",dirp->d_name);
//         closedir(dp);
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<fcntl.h>

// int main(){
//         int fd,n;
//         char buff[20];
//         fd=open("Text.txt",O_RDWR);
//         if(fd==-1)      exit(1);
//         printf("Reading first 10 char\n");
//         n=read(fd,buff,10);
//         write(1,buff,n);

//         printf("\nSkipping 5 char\n");
//         lseek(fd,5,SEEK_CUR);
//         write(1,buff,read(fd,buff,1));

//         printf("\nGoing to 5th last cha\n");
//         lseek(fd,-5,SEEK_END);
//         write(1,buff,read(fd,buff,1));

//         printf("\nGoing to 3rd char\n");
//         lseek(fd,3,SEEK_SET);
//         write(1,buff,read(fd,buff,1));
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/types.h>
// #include<sys/shm.h>
// #include<sys/stat.h>
// #include<sys/mman.h>
// #include<fcntl.h>
// #include<string.h>

// int main(){
//         void *smp;
//         int shmid = shm_open("OS",O_CREAT|O_RDWR,0666);
//         ftruncate(shmid,1024);
//         smp=mmap(0,1024,PROT_WRITE,MAP_SHARED,shmid,0);
// }

// int main(){
//         void* smp;
//         char buff[10];
//         int shmid=shmget((key_t)1144, 1024, 0666|IPC_CREAT);
//         smp=shmat(shmid,NULL,0666);
//         read(0,buff,10);
//         sprintf(psm,"%s",buff);
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<pthread.h>
// int sum,prod;

// void *Sum(void *param){
//         int i,n;
//         n=atoi(param);
//         printf("Inside sum thread");
//         for(i=1;i<=n;i++) sum+=i;
//         printf("Sum thread completed\n");
// }
// void *Prod(void *param){
//         int i,n;
//         n=atoi(param);
//         printf("Inside product thread");
//         for(i=1;i<=n;i++) prod*=i;
//         printf("Product thread completed\n");
// }
// int main(int argc, char *argv[]){
//         pthread_t T1,T2;
//         pthread_attr_t attr;
//         pthread_attr_init(&attr);
//         pthread_create(&T1,&attr,Sum,argv[1]);
//         pthread_create(&T2,&attr,Prod,argv[1]);
//         pthread_join(T1,NULL);
//         pthread_join(T2,NULL);
//         printf("%d\t%d",sum,prod);
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>

// struct FCFS{
//         int PID,AT,BT,RBT,CT,TT,WT;
// }p[10];

// int main(){
//         int i,n;
//         printf("Enter number of processes: ");
//         scanf("%d",&n);
//         //printf("Enter the AT and BT");
//         for(i=0;i<n;i++){
//                 p[i].PID=i+1;
//                 printf("P[%d]:Enter the AT and BT",i+1);
//                 scanf("%d %d",&p[i].AT,&p[i].BT);
//         }
//         int count=0;
//         for(t=0;count<n;t++){
                
//         }
// }

// #include<stdio.h>

// /*
// 0 10 3
// 1 1 1
// 2 2 4
// 3 1 5
// 4 5 2

// 2 1 4
// 1 5 5 
// 4 1 1 
// 0 6 3
// 2 3 2
// */

// int ttt=0,twt=0;

// struct Process
// {
//     int PID,AT,BT,RBT,PT,CT,TT,WT,RT;
// }p[10];

// // void Swap(struct Process *a,struct Process *b){
// //     struct Process t=*a;
// //     *a=*b;
// //     *b=t;
// // }

// // void SS(int n){
// //     int min;
// //     for(int i=0;i<n;i++){
// //         min=i;
// //         for(int j=i+1;j<n;j++){
// //             if(p[j].PT < p[min].PT)
// //                 min=j;
// //         }
// //         Swap(&p[i],&p[min]);
// //     }
// // }

// void calculate(int pos){
//     p[pos].TT = p[pos].CT - p[pos].AT;
//     p[pos].WT = p[pos].TT - p[pos].BT;
//     p[pos].RT = p[pos].WT;
//     ttt+=p[pos].TT;
//     twt+=p[pos].WT;
// }

// void print(int pos){
//     printf("p%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", p[pos].PID,p[pos].AT,p[pos].BT,p[pos].PT,p[pos].CT,p[pos].TT,p[pos].WT,p[pos].RT);
// }

// void main(){
//     int i,n,min,pos;
//     printf("Enter the number of processes\n");
//     scanf("%d",&n);
//     printf("Enter the Arrival Time,Burst Time and Priority for all processes\nAT BT PT\n");
//     for(i=0;i<n;i++){
//         p[i].PID=i+1;
//         scanf("%d%d%d",&p[i].AT,&p[i].BT,&p[i].PT);
//         p[i].RBT=p[i].BT;
//     }

//     //SS(n);
//     int count=0,high_prior;
//     p[9].PT=9999;
//     int t=0;
//     while(count<=n){
//         high_prior=9;
//         //printf("Time %d\n",t);
//         for(i=0;i<n;i++){
//                 if(p[i].PT<p[high_prior].PT && p[i].RBT>0 && p[i].AT<=t)
//                         high_prior=i;
//                         //printf("\tTest2 %d\n",high_prior);
//         }
//         p[high_prior].RBT=0;
//         if(p[high_prior].RBT==0){
//                 count++;
//                 t+=p[high_prior].BT;
//                 p[high_prior].CT=t;
//                 calculate(high_prior);
//         }else{
//                 t++;
//         }
//     }

// //     for(i=0;i<n;i++){
// //         if(p[i].AT == 0){
// //             pos = i;
// //             break;
// //         }
// //     }
    
//     //p[pos].CT = p[pos].BT;
//     //calculate(pos);
    
//         printf("\nPID\tAT\tBT\tPT\tCT\tTT\tWT\tRT\n");
//         for(pos=0;pos<n;pos++)
//                 print(pos);
// //     Swap(&p[pos],&p[(n-1)]);
// //     SS(n-1);
    
//     printf("Average Turn Around Time: %.2f\n",(float)(ttt/(float)n));
//     printf("Average Wait Time: %.2f\n",(float)(twt/(float)n));
// }

