#include "stdio.h"


void main()
{
	int input,inputx,inputy,inputlist;
	int arr[10][10];
	int delinputx,delinputy;
	printf("插入功能請按1,刪除功能請按2\n"); 
	scanf("%d",&inputlist);
	if(inputlist=='1')//插入功能
	{
		printf("請輸入兩個數字...\n");
		int count=0;
		for(int i=0;i<11;i++)
		{
			for(int j=0;j<11;j++)
			{
			arr[i][j]=count;
			count++;
		    }
		}	
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<11;j++)
		{
			printf("%d ",&arr);
		}
		printf("\n");
	}
	scanf("%d %d %d",&input,&inputx,&inputy);
	arr[inputx][inputy]=input;
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<11;j++)
		{
			printf("%d ",&arr);
		}
		printf("\n");
	}
    }
    if(inputlist=='2')//刪除功能
    {
	scanf("%d %d",&delinputx,&delinputy);
	arr[delinputx][delinputy]=0;
	for(int i=delinputx;i<11;i++)
	{
		for(int j=delinputy;j<11;j++)
		{
			arr[delinputx][delinputy]=arr[delinputx+1][delinputy];

		}
	}
	arr[10][10]=0;
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<11;j++)
		{
			printf("%d ",&arr);
		}
		printf("\n");
	}
    }
	system"pause";
	return 0;
}