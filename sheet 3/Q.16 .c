


/** Q.16 sheet_3...Fibonacci series **/
int fabo(int n)
{
    int n0=0; //index 0
    int n1=1; //index 1
    int nn;   //index 0+1
    if( (n==0)||(n==1) )
    {
        return n;
    }
    for(int i=1;i<n;i++)
    {
        nn=n0+n1;
        n0=n1;
        n1=nn;
    }
    return nn;
}

int main()
{
    int n;
	printf("enter Number of Fibonacci series:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("index:%d   %d\n",i,fabo(i));
    }
	return 0;
}