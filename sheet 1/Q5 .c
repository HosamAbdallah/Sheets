

/** Q5. sheet.1**/

/***** Write a program that take two numbers and calculate 
	   the reminder without using % operation	****/

void remainder_twoNum(int a,int b)
{
    printf("enter first number \n");
    scanf("%d",&a);
    printf("enter second number \n");
    scanf("%d",&b);
    int rem;
    rem=a-(a/b)*b;
    printf("the remainder= %d\n",rem);
}

int main()
{
    while(1)
    {
        int a,b;
        remainder_twoNum(a,b);
    }
    return 0;
}