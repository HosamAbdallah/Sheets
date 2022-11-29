

/** Q.10 sheet_2 sol in lec_11 at (7.38)**/

int countZeros_between_2ones(int num)
{
    int i,c=0,max=0,flag=0;
   /*** num=0b0001000101001000010000; da lw 3awez tst5dem raqam binary  **/
    for(i=31; i>=0; i--)
    {
        if( ((num>>i)&1)==1 )
        {
            if(c>max)
            {
                max=c;
            }
            c=0;
            flag=1;
        }
        else
        {
            if(flag==1)
            {
                c++;
            }
        }
    }
    return max;
}


int main()
{

    //print rev
    int numb;
    printf("enter number:");
    scanf("%d",&numb);
    int max=countZeros_between_2ones(numb); /**numb=129[0b10000001] then max Num of zero between 2_ones =6**/
    printf("max Num of zero between 2_ones=%d\n",max);
	
    return 0;
}