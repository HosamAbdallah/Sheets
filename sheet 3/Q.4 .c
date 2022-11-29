
/** Write a C function that take two numbers and return array contain all 
	numbers between the two given numbers. (numbers 2,6->return array 
	contain [3,4,5]).**/

/** Q.4 sheet_3 **/

int array_between2Num(int*arr,int x,int y)
{
    if(x>y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    if((x-y)>100)
    {
        printf("plz don't enter your elements size above 100\n");
        return 0;
    }
    int size=y-x-1; /** at x=10,y=15..... size=15-10-1=4 w tar7t 1 mn l size 3shan lma bageb L arqam ben ay raqmen lazem ttra7 mnhom wa7ed*/
    for(int i=0;i<size;i++)
    {
        arr[i]=x+i+1;
    }
                    /* at i=0,x=10...... arr[0]=10+(0)+1=11
                                         arr[1]=10+(1)+1=12
                                         arr[2]=10+(2)+1=13
                                         arr[3]=10+(3)+1=14  */

     return size;
}
void array_print(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%2d  ",arr[i]); // arr[i]....*(arr+i) there're same
    }
     printf("\n");
}

int main()
{

   int array[100];
   int x,y;
   printf("please enter the two numbers \n");
   scanf("%d%d",&x,&y);
   int size=array_between2Num(array,x,y);
   array_print(array,size);
   return 0;
}

