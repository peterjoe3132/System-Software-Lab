#include <stdio.h>
#include<string.h>
char dir[50], file[50][50],name[50];
int i,c=0,j,ch;

void Create()
{
	printf("\n\n Creating a file\n\n");
			printf("enter the name of the file to be added\n");
			scanf("%s",file[c]);
			c++;
}


int search(char name[50])
{
	for(j=0;j<c;j++)
	{
		if(strcmp(file[j],name)==0)
		{
			return j;
		}
	}
	return -1;
}


void Delete()
{	i=0;
	printf("enter the name of the file to be deleted \n");
	scanf("%s",name);
	i=search(name);
	if(i==-1)
	{
		printf("file not found\n");
		return;
	}
	for(j=i;j<c;j++)
	{
		strcpy(file[j],file[j+1]);

	}
	c--;
}


void Display()
{
	for(i=0;i<c;i++)
		printf("%s\n",file[i]);
}


int main(){
	
	printf("enter the name of the directory\n");
	scanf("%s",dir);

	while(1){

	printf("\n\n\nenter the menu number\n1.Create file\n2.Delete file\n3.search file\n4.Display files\n5.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			Create();		
			break;
		}

		case 2:
		{
			Delete();
			break;
		}

		case 3:
		{	printf("enter the file name to be searched\n");
			scanf("%s",name);
			i=search(name);
			if(i==-1)
				printf("file not found");
			else 
				printf("file found at position %d\n",i);
			break;
		}

		case 4:
		{
			Display();
			break;
		}

		case 5:
		{
			return;

		}

	}
	}
}
