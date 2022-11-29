
/** Q4. sheet.1**/

/**** Write a program that take two numbers and multiply 
	  them without using * operation.******/


void multiply_twoNum(int num1,int num2)
{
    printf("enter first number \n");
    scanf("%d",&num1);
    printf("enter second number \n");
    scanf("%d",&num2);
    int i,res=0;
    for(i=0;i<num1;i++)
    {
        res=res+num2;
    }
    printf("result of multiply two num is=%d\n",res);
}


int main()
{
    while(1)
    {
        int num1,num2;
        multiply_twoNum(num1,num2);
    }
    return 0;
}




