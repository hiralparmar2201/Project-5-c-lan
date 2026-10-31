#include<stdio.h>
#include<conio.h>

int main()
{
	int size;
	int arr[5];
	
	printf("Enter the row & column size : ");
	scanf("%d",&size);
	
	printf("a[0]=");
	scanf("%d",&arr[0]);
	printf("a[1]=");
	scanf("%d",&arr[1]);
	printf("a[2]=");
	scanf("%d",&arr[2]);
	printf("a[3]=");
	scanf("%d",&arr[3]);
	printf("a[4]=");
	scanf("%d",&arr[4]);


	 
	printf("Negative elements from an Array: ");
	  
	 if(arr[0] < 0) 
	{ 
	 printf("%d ", arr[0]);
	}
    if(arr[1] < 0) 
	{ 
	printf("%d, ", arr[1]);
	}
    if(arr[2] < 0) 
	{ 
	printf("%d, ", arr[2]); 
	}
    if(arr[3] < 0) 
	{ 
	printf("%d, ", arr[3]); 
	}
    if(arr[4] < 0)
	{
	 printf("%d", arr[4]); 
	}
	 printf("\n");

	 return 0;
}
