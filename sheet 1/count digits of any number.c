




// write a program to Count the number of digits
int main(void)
{
    int sum=0,num,rem=0,count=0;
    printf("Enter your number:\n");
        scanf("%d",&num);
        while(num>0)
        {
            num = num /10;
           count++;
        }
        //if you want to use for loop
        /*for(;num>0;num=num/10)
        {
            count++;
        }*/
        printf("count of digits=%d\n",count);



    return 0;
}










