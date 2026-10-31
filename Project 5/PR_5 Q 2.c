#include<stdio.h>
#include<conio.h>

int main()
{
	
	int arr[3][3];
	int max;
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
	
	max=arr[0][0];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("\nThe largest element is :");
	printf("%d ",max);
		
	 return 0;
}
