
https://aticleworld.com/5-way-to-reverse-bits-of-an-integer/

//Q.6 sheet_2

/** Write c code to reverse bits in an 8-bit number 
	(149->10010101 return 169->10101001),
	(5->00000101 return 160->10100000).    **/

// we must use Function (Print_binary) to print a number in binary then reverse it in other function call (Reverse_binary22)
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

int Reverse_binary22(int num)
{
    int tmp=0,i;
    for(i = 0; i < 7; i++)
    {
        tmp |= (num&1); // putting the set bits of num

        num >>= 1; //shift the tmp Right side

        tmp <<= 1; //shift the tmp left side

    }
    return tmp;
}

int main()
{
    int number;
    printf("the number that will be reverse in binary:\n");
    scanf("%d",&number);
    int rev_binary=Reverse_binary22(number);
    Print_binary(rev_binary);
	
	return 0;
}