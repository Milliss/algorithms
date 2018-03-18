#include "stdio.h"


void main()
{
	int input,inputx,inputy,inputlist;//input為值 inputx,y為x,y軸 
	int arr[10][10];
	int delinputx,delinputy;//刪除的那個點的x,y軸
	printf("插入功能請按1,刪除功能請按2\n"); 
	scanf("%d",&inputlist);
	if(inputlist=='1')//插入功能
	{
		printf("請輸入三個數字...\n");
		int count=0;//計數
		for(int i=0;i<11;i++)//先把每個格子初始設成0~99
		{
			for(int j=0;j<11;j++)
			{
			arr[i][j]=count;
			count++;
		    }
		}	
	for(int i=0;i<11;i++)//把初始格子print出來 就是0~99
	{
		for(int j=0;j<11;j++)
		{
			printf("%d ",&arr);
		}
		printf("\n");
	}
	scanf("%d %d %d",&input,&inputx,&inputy);//讀取數字 依序是 數值,x軸,y軸
	arr[inputx][inputy]=input;//把輸入的值丟去那個格子
	for(int i=0;i<11;i++)//把全部print出來一次
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
    printf("請輸入二個數字...\n");
	scanf("%d %d",&delinputx,&delinputy);//讀取要刪除的位置
	arr[delinputx][delinputy]=0;//刪除位置變成0
	for(int i=delinputx;i<11;i++)//把後面的全部往前移動一格
	{
		for(int j=delinputy;j<11;j++)
		{
			arr[delinputx][delinputy]=arr[delinputx+1][delinputy];

		}
	}
	arr[10][10]=0;//最後一格設成0
	for(int i=0;i<11;i++)//print出來
	{
		for(int j=0;j<11;j++)
		{
			printf("%d ",&arr);
		}
		printf("\n");
	}
    }
	system"pause";//暫停動作
	return 0;
}