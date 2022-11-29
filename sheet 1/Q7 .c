

/** Q7. sheet.1**/

/** Write a program that reads a positive integer and 
	computes the factorial.**/

int facto(int num)
{
    int fact=1;
    if(num<0)
    {
        return 0;
    }
    for(int i=1; i<num; i++)
    {
        fact=fact*i;
    }
    return fact;
}


int main()
{
    while(1)
    {
        int num;
        printf("enter your number: ");
        scanf("%d",&num);
        int factorial=facto(num);
        printf("fact is =%ld\n",factorial);
    }
    return 0;
}