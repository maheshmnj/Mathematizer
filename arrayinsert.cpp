#include<stdio.h>
main()
{
	int arr[50],n,i,key,pos;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter elemnet to insert:");
	scanf("%d",&key);
	printf("enter the position where you want to insert:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=key;
	 printf("Resultant array is");
 
   for (i = 0; i<= n; i++)
      printf("%d\n", arr[i]);
 
	
}
