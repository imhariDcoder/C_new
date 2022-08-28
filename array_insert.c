#include<stdio.h>
int main ()
{
	int arr[100],i,n,c,val,pos;
	printf("enter the number of elements in the array : " );
	scanf("%d",&n);
	printf("enter the array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n=n+1;
	printf("Enter the value to be inserted : ");
	scanf("%d",&val);
	printf("The position of insertion : ");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=val;
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
		
	}
	return 0;
}
