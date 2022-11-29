

/** Q11. sheet.1**/

/** Write a program to sum the digits in a decimal number 
	145 -> 1+4+5=10. **/

int sum_NumDigits(int num)
{
    int sum=0,rem=0;
    while(num>0)
    {
        rem=num%10;
        num = num /10;
        sum=sum+rem;
    }
    return sum;
}


int main()
{
    while(1)
    {
        int num;
        printf("enter your number: ");
         scanf("%d",&num);
        int count=sum_NumDigits(num);
        printf("count digits is =%2d\n",count);
    }
    return 0;
}