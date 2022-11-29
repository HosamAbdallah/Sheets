

//Q.6 sheet_2

/** Write c code to reverse bits in an 8-bit number 
	(149->10010101 return 169->10101001),
	(5->00000101 return 160->10100000).    **/
	
// we must use Function (Print_binary) to print a number in binary then reverse it in other function call (print_Rev)
void Print_binary(int num)
{
    int i,flag=0;
    for(i=31; i>=0; i--)
    {
        if(((num>>i)&1)==1)
        {
            printf("1");
            flag=1;
        }
        else
        {
            if(flag==1)
            {
                printf("0");
            }
        }

    }
    printf("\n");
}
	
int print_Rev(int num)
{
	/** x is the num 
		y is the Reading the bits
		z is the result of set bits */
		
	int y,z=0;
	printf("Enter your Number:\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		/** Read bit */
		y=(num>>i)&1;
		/** Set bit bs bl3aks */
		z=z|y<<(31-i);
	}
	return z;
}

int main()
{
	int num;
	printf("Enter your Number:\n");
	scanf("%d",&num);
	int rev=print_Rev(num);
	Print_binary(rev);
}
	