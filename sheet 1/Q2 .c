

/** Q2. sheet.1**/

/**** Write a program to take numbers from user and find the 
	  max and min from them (let users choose the No of numbers.***/


typedef unsigned char u8;
typedef  char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

void print_MaxMin_betweenNumbers(int size_ofnum)/** replace data type (int) >>>> (s32) **/
{
    printf("enter your size of number:\n");
    scanf("%d",&size_ofnum);
    int i,num,max=0,min=100;
    printf("enter your numbers: \n");
    for(i=0; i<=size_ofnum; i++)
    {
        printf("enter num%2d: ",i);/* batba3 kol raqam bad5alo */
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
    }
    printf("max=%d and min=%d\n",max,min);
}

int main()
{
    while(1)
    {
        int size_ofNum;
        print_MaxMin_betweenNumbers(size_ofNum);
    }
    return 0;
}

