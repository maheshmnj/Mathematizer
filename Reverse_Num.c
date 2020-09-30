
//https://www.facebook.com/permalink.php?story_fbid=2724614711117563&id=100007071815664
//Subscribed by Souhardhya Paul

-----------------------------------------------------------------------------------------------------------------------------------
// PROGRAM SUBMITTED BY SOUHARDHYA PAUL
// THIS PROGRAM RETURNS REVERSE OF ANY NUMBER

#include<stdio.h>
int main()
{
	int num,num2,num3=0,rem;
	printf("Enter a 5 digit no.");
	scanf("%d",&num);
	num2=num;
	while(num!=0)
	{
		rem=num%10;
		num3=(num3*10)+rem;
		num=num/10;
	}
	printf("Reverse of %d is %d",num2,num3);
	return 0;	
}
