#include<stdio.h>
void main()
{
	int n,dist,head,temp,total=0;
	printf("Enter the number of reads :");
	scanf("%d",&n);
	printf("Enter the current position of head :");
	scanf("%d",&head);
	for (int i = 0; i < n; ++i)
	{
		printf("Enter the starting location of the disk read :");
		scanf("%d",&temp);
		dist=head-temp;
		if(dist<0)
		{
			dist=-dist;
		}
		head=temp;
		total+=dist;
		// printf("%d\n",total );
	}
	printf("total travelled:%d",total);
}