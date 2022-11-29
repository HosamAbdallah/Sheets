
 Q(12).
 /* rite a program to take even numbers from user and 
print the sum of them after each entry if the user enters
2 odd number the program print "bye" and stopped. */

int main(void)
{
	int num,sum=0,flag;
	while(flag<2)
	{
		scanf("%d",&num);
	if (num%2==0)
	{
		sum=sum+num;
	}
	else
	{
		// flag to indicate for the user enter 2 odd number
		flag++;
		printf("bye");
	}
		printf("sum=%d\n",sum);
	}
		
}


























