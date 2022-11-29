

/** Q3. sheet.1**/

/*** Write a program to take numbers from user and 
	 calculate the sum of them (let users choose the No of numbers ****/


typedef unsigned char u8;
typedef  char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;


void sum_Numbers(int size_ofNum)
{
    printf("enter your size of number:\n");
    scanf("%d",&size_ofNum);
    int i,num,sum=0;
    printf("enter your numbers:\n");
    for(i=0;i<size_ofNum;i++)
    {
        printf("num%d :",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("sum of all numbers you entrance:%2d\n",sum);
}

int main()
{
    while(1)
    {
        int size_ofNum;
        sum_Numbers(size_ofNum);
    }
    return 0;
}


