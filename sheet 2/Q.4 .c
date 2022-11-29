

//Q.4 sheet 2

int print_countOf_1s(int num)
{
    int i,count=0;
    for(i=31; i>=0; i--)
    {
        if(((num>>i)&1)==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
    }
    return count;
}

int main()
{
	int numb;
    printf("enter number:");
    scanf("%d",&numb);
	int count_1s=print_countOf_1s(numb);
    printf("count_1s=%d\n",count_1s);
	
	return 0;
}