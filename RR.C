#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,time_quantum,btime[10],limit;
int p;
int q[10],temp[10];
int front=0,rear=0;
clrscr();
printf("enter no of processes in queue:");
scanf("%d",&limit);
printf("\nenter the details of each process");
for(i=0;i<limit;i++)
{
printf("\nEnter the process = ");
scanf("%d",&p);
printf("Burst Time for %d = ", p);
scanf("%d",&btime[i]);
temp[i]=btime[i];
q[rear]=p;
rear++;
}
for(j=front;j<rear;j++)
{
printf("%d   %d\n",q[j],btime[j]);
}
printf("enter time quantum:");
scanf("%d",&time_quantum);
printf("\n");
i=0;
while(rear>0)
{
if(btime[i]>=time_quantum)
{
 btime[i]-=time_quantum;
 q[rear]=q[i];
 btime[rear]=btime[i];
 for(j=front;j<rear;j++)
 {
 q[j] = q[j+1];
 btime[j]=btime[j+1];
 }
}
else if(btime[i]<time_quantum || btime[i] == 0)
{
btime[i]=0;
for(j=i;j<rear;j++)
{
q[j]=q[j+1];
btime[j]=btime[j+1];
}
rear--;
}
for(j=front;j<rear;j++)
{
printf("%d  %d\n",q[j], btime[j]);
}
}
getch();
}
