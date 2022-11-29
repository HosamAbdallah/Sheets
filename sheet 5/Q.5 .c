


/** 5) You have an array of integers contain Mono numbers only (from 0 to 9)
		, write c function to find the most repeated number (try in O(n)).    */

/** Q.5 sheet.5 **/

char array_MostRepeated_mono(char *arr,char size,char *pnum)
{
    char count[10]={0};/** lazem t3ml initialization LL array of char...y3ne t7oto fe Zeros */
    char i,max=0;
    for(i=0;i<size;i++)
    {
        count[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            *pnum=i;
        }
    }
    return max;
}

int main()
{
    char arr4[]={1,3,2,1,1,2,2,5,4,6,8,9,2,0};
    char num4;
    char size4=sizeof(arr4)/sizeof(*(arr4));
    char repeat2=array_MostRepeated_mono(arr4,size4,&num4);
    printf("\n Max repeat is:%d  the num is:%d\n",repeat2,num4); //output=4
	return 0;
}



