


// write a program to take a number and sum its digits
int main(void)
{
    int sum=0,num,rem=0;
    printf("Enter your number:\n");
    while(1)
    {
        scanf("%d",&num);
        while(num>0)
        {
            rem=num%10;
            num = num /10;
            sum=sum+rem;
        }
        printf("sum of digits=%d\n",sum);
    }


    return 0;
}


















