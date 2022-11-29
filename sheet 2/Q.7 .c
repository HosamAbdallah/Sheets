

//Q.7 sheet_2

/**(7) Write c code to sum numbers from 1 to 100 (without loop)**/

int Sum_numbers(int num1,int num2)
{
    int sum=0;
    //num1 or num2 isn't a Negative Numbers
    if( (num1<0) || (num2<0) )
    {
        return 0;
    }
    else
    {
        //num1 is must be the bigger number
        if(num1<num2)
        {
            //swap
            num1=num1+num2;
            num2=num1-num2;
            num1=num1-num2;
        }
		else
		{
			//no code
		}
    }
    num1=( ( (num1)*(num1+1) )/2 );
    num2=( ( (num2)*(num2+1) )/2 );
    sum=num1 -num2;
    return sum;
}

int main()
{
    unsigned int num1;
    printf("enter number:");
    scanf("%d",&num1);
	
    unsigned int number2;
    printf("enter number:");
    scanf("%d",&number2);
	
    unsigned int sum=Sum_numbers(num1,number2);
    printf(" number:%d\n",sum);

    return 0;
}

