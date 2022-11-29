
/***** Q1.sheet_1 *******/
/*** Write a program to take 2 numbers from user and 
     calculate sum of all numbers between them. *****/
	 
	 
typedef unsigned char u8;
typedef  char s8;
typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;

void sum_NoBetween_2No(u16 x,u16 y)
{
    u16 i,sum=0;
    printf("enter the 2 number:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y)
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    for(i=x+1;i<y;i++)
    {
        sum=sum+i;
    }
    printf("the sum is =%2d",sum);
}

int main()
{
    u16 x,y;
    print_AllNoBetween_2No(x,y);
    return 0;
}






