

//Q.3 sheet_2

/** (3) Write a program to reverse a number in decimal 
	representation (1205->5021) **/
	
int Rev_Number(int num)
{
    int i,rem=0,rev;
    while(num>0)//for(;num>0;)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    return rev;
}


int main()
{
    //print rev
    int numb;
    printf("enter number:");
    scanf("%d",&numb);
    int rev_num=Rev_Number(numb);
    printf("rev_num=%d\n",rev_num);
    
	return 0;
}
