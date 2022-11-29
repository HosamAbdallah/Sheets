  


/** Q.2 sheet.2 **/
void func(int n)
{
    int x='a'-'A';
    char c;
    printf("enter your character:\n");
    scanf(" %c",&c);
    printf("enter your number:\n");
    scanf("%d",&n);

    /** num is odd **/
    if(n%2!=0)
    {
        if( (c>'a') && (c<'z') )
        {
            c=c-x;
        }
        else if( (c>'A') && (c<'Z') )
        {
            c=c+x;
        }
    }
    if(c>='0'&&(c<='9'))
    {
        printf("the char is a number and there is no change\n");
    }
    printf("the char is %c\n",c);
}


	
int main()
{
	int num;
    printf("enter number:");
    scanf("%d",&num);
    func(num);
	return 0;
}
	
	