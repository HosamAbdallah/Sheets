

/** Q6. sheet.1**/

/** Write a program to calculate the power of a number. 
	The number and its power are input from user. **/

double power(int base,int exp)
{
    double z=1;
    if(exp==0)
    {
        z=1;
    }
    else if(exp>0)
    {
        for(int i=0;i<exp;i++)
        {
            z=z*base;
        }
    }
    else
    {
        exp=exp*-1;/** lazem tdreb l os fe (-1) **/
        for(int i=0;i<exp;i++)
        {
            z=z*base;
        }
        z=1/z;
    }
    return z;
}

double power(int base,int exp); /** lazem tkteb l proto type bta3 l func abl l main **/
int main()
{
    while(1)
    {
        int x,y;
        printf("Enter a base :\n ");
        scanf("%u",&x);
        printf("Enter an exponent : ");
        scanf("%d",&y);
        printf("%d\n",y);
        double p=power(x,y);
        printf("pow= %lf ",p);
    }
    return 0;
}