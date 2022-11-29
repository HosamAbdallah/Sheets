


/** Most Rep Num in sort array **/

int most_rep_num(int*arr,int size,int*pnum)
{
    int i;
    int count=0,max=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
                *pnum=arr[i];
            }
            count=0;
        }
    }
    return max+1;
}

int main()
{
	int arr4[]= {1,1,1,2,2,5,4,6,8,9,10,12,12,12,12,12};
    int num4;
    int size4=sizeof(arr4)/sizeof(*(arr4));
    printf("size4=:%d\n",size4);
    int repeat2=most_rep_num(arr4,size4,&num4);
    printf("\n Max repeat is:%d  the num is:%d\n",repeat2,num4);
	return 0;
}


