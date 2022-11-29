

/** Q.8 sheet.3 **/
int array_longest_occerance(int*arr,int size)
{
    int i,c,max,num;
    c=0;
    max=0;
    num=arr[0];//arr[0] mmoken aktbha kda.... *(arr)
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            c++;
        }
        else
        {
            num=arr[i];
            if(c>max)
            {
                max=c;
            }
            c=1;
        }
    }
    return max;
}



int main()
{
	int ar[]={10,1,2,5,33,5,5,10,10,10,33,33,33,33,33,5,8};
    int sz=sizeof(ar)/sizeof(*(ar));
    int longest=array_longest_consecutive(ar,sz);
    printf("longest consec series for num=%d\n",longest);
	return 0;
}


