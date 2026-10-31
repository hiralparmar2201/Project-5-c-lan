#include<stdio.h>
#include<conio.h>

int main()
{
	
	int arr[3][3];
	int row=0,col=0,row_sum,col_sum;
	int i,j; 
	
	printf("Enter arrays elements : \n");
	printf("a[0][0]=");
	scanf("%d",&arr[0][0]);
	printf("a[0][1]=");
	scanf("%d",&arr[0][1]);
	printf("a[0][2]=");
	scanf("%d",&arr[0][2]);
	
	printf("a[1][0]=");
	scanf("%d",&arr[1][0]);
	printf("a[1][1]=");
	scanf("%d",&arr[1][1]);
	printf("a[1][2]=");
	scanf("%d",&arr[1][2]);
	
	printf("a[2][0]=");
	scanf("%d",&arr[2][0]);
	printf("a[2][1]=");
	scanf("%d",&arr[2][1]);
	printf("a[2][2]=");
	scanf("%d",&arr[2][2]);
	
	printf("\nEnter row number : ");
	scanf("%d",&row);
	
	printf("Elements of row %d : %d, %d, %d",row,arr[row][0],arr[row][1],arr[row][2]);
	row_sum=arr[row][0]+arr[row][1]+arr[row][2];
	printf("\nThe sum of a row %d : %d\n",row,row_sum);
	
	printf("\nEnter column number : ");
	scanf("%d",&col);
	
	printf("Elements of col %d : %d, %d, %d",col,arr[0][col],arr[1][col],arr[2][col]);
	col_sum=arr[0][col]+arr[1][col]+arr[2][col];
	printf("\nThe sum of a col %d : %d\n",row,col_sum);
		
	printf("\n");
		
	return 0;
	
}
