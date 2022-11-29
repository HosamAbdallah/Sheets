

/** Q3.Sheet.3 **/

int Power3(int n)
{
    while (x%3==0)
    {
        x=x/3;
    }
    if(x==1)
        return 0;//false
    else
        return 1;//true
}

int main()
{
	int num;
    printf("enter number:");
    scanf("%d",&num);

    int pow=Power3(num);
    if(Power3(num)==0)
    {
        printf("the num you enter is Power of 3\n");
    }
    else
    {
        printf("the num you enter isn't Power of 3\n");
    }
	return 0;
}
