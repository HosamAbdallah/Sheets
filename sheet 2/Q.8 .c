

/** Q.8 sheet_2 */

/** (8) Write a full C program to take 4 choose from user:
1-Set bit. 
2-Clear bit 
3-Toggle bit.
4-Read bit.
then take number, and bit number. 
print the number after set, clear, or toggle if 1,2 or 3 is selected. 
print the bit value if 4 is selected. **/ 

void bit_operations(int num)
{
    char read;
    int c,bit; /** c is indicate to the operation number **/
    printf("please choose the number of operation you want to preform \n");
    printf("1-Set bit\n");
    printf("2-Clear bit\n");
    printf("3-Toggle bit\n");
    printf("4-Read bit\n");
    scanf("%d",&c);

   if((c<=0)||(c>4))
    {
        printf("the operation isn't valid \n");
    }
    else
    {
        printf("Enter bit \n");
        scanf("%d",&bit);
        switch(c)
        {
        case 1:
            /** Set bit**/
            num=num|(1<<bit);
            printf("number after set bit is:%d\n",num);
            break;
        case 2:
            /** toggle bit**/
            num=num^(1<<bit);
            printf("number after toggel bit is:%d\n",num);
            break;
        case 3:
            /** clear bit**/
            num=num&(~(1<<bit));
            printf("number after clear bit is:%d\n",num);
            break;
        case 4:
            /** read bit**/
            read=(num>>bit)&1;
            printf("the bit is %d\n",read);
            break;
        case 5:
        default:
            printf("the operation is not valid \n");
            break;
        }
        printf("\n");
    }
}

int main()
{
    while(1)
    {
        int numb;
        printf("enter number:");
        scanf("%d",&numb);
        bit_operations(numb);
    }
	
	return 0;
}