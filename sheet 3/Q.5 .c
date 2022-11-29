

/** Q.5 sheet.3 **/
int mostRepeatedNum(int*arr,int size,int*pnum)
{
    int i,j,c=0,max=0;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            *pnum=arr[i];
        }
        c=0;
    }
    printf("most num is:%d\n",*pnum);/** momken ttba3 l raqam gowa l Fun() 3ady badal mattba3o fe l main **/
    return max;
}

int main()
{
	int arr2[]={10,2,3,4,1,12,3,5,3,6,3,7,10,10,10,10,10};
    int sizee=sizeof(arr2)/sizeof(*(arr2));
    int nnum;
    int n=mostRepeatedNum(arr2,sizee,&nnum);
    printf("Most repeated Num=%d and it's repeated:%d\n \n",nnum,n);
	return 0;
}

