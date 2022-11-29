

//Q.5 sheet_2

/** (5) write a program to print the binary representation of a 
	number, try not to print zeros on the left (5->print 101) **/
	
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

int main()
{
    int numb;
    printf("enter number:");
    scanf("%d",&numb);
    Print_binary(numb);
	
	return 0;
}