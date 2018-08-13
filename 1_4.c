#include<stdio.h>
main()
{
int k,n,i,j,wt[20],c[20][2],t[20],b[20];
printf("enter the  number of processes:");
scanf("%d",&n);

for(i=0;i<n;i++)
 {
  printf("enter the burst time:");	
  scanf("%d",&c[i][0]);
  printf("enter the priority:");
  scanf("%d",&c[i][1]);
 }

for(i=1,k=0;i<=n,k<n;i++,k++)
 for(j=0;j<n;j++)
 {
  if(c[j][1]==i)
   b[k]=c[j][0];
 }

for(i=0;i<n;i++)
wt[i]=0;

for(i=1;i<n;i++)
 for(j=0;j<i;j++)
        wt[i]+=b[j];

for(i=0;i<n;i++)
 {
   t[i]=b[i]+wt[i];
   printf("wait time  is %d and turnaround time is %d for the process with  burst time of %d \n",wt[i],t[i],b[i]);
 }
}

