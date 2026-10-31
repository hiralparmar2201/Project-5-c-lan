#include<stdio.h>
#include<conio.h>

int main()
{
	int size;
	int arr[3][3];
	
	printf("Enter the row & column size : ");
	scanf("%d",&size);
	
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
	
	printf("\nThe transpose matrix of an array : ");
		
	printf("\n%d ",arr[0][0]);
	printf("%d ",arr[0][1]);
	printf("%d ",arr[0][2]);

	printf("\n%d ",arr[1][0]);
	printf("%d ",arr[1][1]);
	printf("%d ",arr[1][2]);

	printf("\n%d ",arr[2][0]);
	printf("%d ",arr[2][1]);
	printf("%d ",arr[2][2]);

	printf("\n");
		
	return 0;
	
}
