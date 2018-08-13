#include<stdio.h>
main()
{
int n,i,j,wt[20],b[20],t[20];
printf("enter the  number of processes:");
scanf("%d",&n);

printf("enter the burst time:");
for(i=0;i<n;i++)
 scanf("%d",&b[i]);

//wt[0]=0;

for(i=0;i<n;i++)
wt[i]=0;

for(i=1;i<n;i++)
 for(j=0;j<i;j++)
  	wt[i]+=b[j];

for(i=0;i<n;i++)
 {
   t[i]=b[i]+wt[i];
   printf("wait time for proccess P %d is %d and turnaround time is %d with burst time of %d \n",i,wt[i],t[i],b[i]);
 }
}
