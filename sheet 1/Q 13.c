
Q 11.
/** write a program to take a poster number and calculate the no. of holes in each number */
int main(void)
{
    int sum,num,rem=0;
    while(1)
    {
        sum=0;
        scanf("%d",&num);
		//hena bnt check 3la num=0 3shan l while l t7t feha bug msh when num=0 it doesn't print 1
        if(num==0)
        {
            sum=1;
            continue;
        }
        while(num>0)
        {
            rem=num%10;
			/*
			* tare2a tanya best5dam switch case 
			switch(rem)
			{
				case 9:
				case 6:
				case 4:
				case 0:
				sum++;
				break;
				
				case 8:
				sum=sum+2;
				break;
				
				default:
			}*/
            if(rem==8)
            {
                sum=sum+2;
            }
            else if( (rem==4) || (rem==6) || (rem==9) || (rem==0) )
            {
                sum++;
            }
            num=num/10;
        }
        printf("sum = %d \n", sum);
    }
}