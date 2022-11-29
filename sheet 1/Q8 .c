

/** Q8. sheet.1**/

/** Write a program that reads a positive integer and checks if it is a prime**/

typedef enum{
FALSE=0,
TRUE=1
}bool_type;

bool_type Isprime(int n)
{
    if(n==0||n==1||n<0)
    {
        return FALSE;//not prime
    }
    else{}
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return FALSE;//not prime
        }
    }
    return TRUE;//prime
}


typedef enum{
FALSE=0,
TRUE=1
}bool_type;
int main()
{
    while(1)
    {
        int n;
        printf("enter your number")
        scanf("%d",&n);
        if(Isprime(n)==FALSE)
        {
            printf("num isn't prime \n");
        }
        else
        {
            printf("num is prime %d \n",n);
        }
    }
    return 0;
}