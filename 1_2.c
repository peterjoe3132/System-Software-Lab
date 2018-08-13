#include<stdio.h>
main()
{
int n,i,j,wt[20],b[20],t[20],k,temp;
printf("enter the  number of processes:");
scanf("%d",&n);

printf("enter the burst time:");
for(k=0;k<n;k++)
 scanf("%d",&b[k]);

for(i=0; i<n; i++)
for(j=0; j<n-1; j++)
if( b[j] > b[j+1] )
{
temp = b[j];
b[j] = b[j+1];
b[j+1] = temp;
}


for(i=0;i<n;i++)
wt[i]=0;

for(i=1;i<n;i++)
 for(j=0;j<i;j++)
        wt[i]+=b[j];

for(i=0,k=0;i<n,k<n;i++,k++)
 {
   t[i]=b[i]+wt[i];
   printf("wait time is %d and turnaround time is %d  for the process with burst time of %d \n",wt[i],t[i],b[i]);
 }
}



